/*
 * XREFs of NtFilterBootOption @ 0x1409CD880
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x1409CDCC8 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409CE294 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall NtFilterBootOption(unsigned int a1, int a2, unsigned int a3, _QWORD *a4, size_t Size)
{
  unsigned int v7; // r15d
  int v8; // edi
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // eax
  unsigned int v12; // r8d
  unsigned int *v13; // rdx
  int v14; // eax
  __int16 v15; // r10
  __int64 v16; // rcx
  int v18; // [rsp+24h] [rbp-44h]
  PVOID P; // [rsp+28h] [rbp-40h]
  _QWORD v20[2]; // [rsp+30h] [rbp-38h] BYREF

  v7 = a1;
  P = 0LL;
  v20[0] = 0LL;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
    v8 = -1073741790;
    goto LABEL_56;
  }
  if ( !qword_140D01440 )
  {
    v8 = -2143092730;
    goto LABEL_56;
  }
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      if ( a2 )
      {
        if ( a3 )
        {
          if ( a4 )
          {
            v9 = Size;
            if ( (_DWORD)Size )
            {
              v11 = dword_140D04978;
              if ( !_bittest(&v11, HIBYTE(a3) & 0xF) )
              {
LABEL_20:
                v8 = 0;
                goto LABEL_56;
              }
              if ( KeGetCurrentThread()->PreviousMode )
              {
                if ( (unsigned __int64)a4 + (unsigned int)Size > 0x7FFFFFFF0000LL
                  || (_QWORD *)((char *)a4 + (unsigned int)Size) < a4 )
                {
                  MEMORY[0x7FFFFFFF0000] = 0;
                }
                if ( (unsigned int)Size > 8 )
                {
                  P = (PVOID)ExAllocatePool2(256LL, (unsigned int)Size, 1649632595LL);
                  if ( !P )
                  {
                    v8 = -1073741801;
                    goto LABEL_56;
                  }
                  memmove(P, a4, (unsigned int)Size);
                  a4 = P;
                }
                else
                {
                  memmove(v20, a4, (unsigned int)Size);
                  a4 = v20;
                }
                v7 = a1;
              }
              goto LABEL_31;
            }
          }
        }
      }
    }
    else
    {
      if ( v7 != 2 )
      {
        v8 = -1073741585;
        goto LABEL_56;
      }
      if ( a2 )
      {
        if ( a3 )
        {
          if ( !a4 )
          {
            v9 = Size;
            if ( !(_DWORD)Size )
            {
              v10 = dword_140D04978;
              if ( !_bittest(&v10, HIBYTE(a3) & 0xF) )
                goto LABEL_20;
LABEL_31:
              v12 = 0;
              v8 = 0;
              if ( *((_WORD *)qword_140D01440 + 18) )
              {
                v13 = (unsigned int *)(qword_140D04970 + 8);
                while ( 1 )
                {
                  if ( *(v13 - 1) == a3 )
                  {
                    v14 = *(v13 - 2);
                    if ( !v14 || v14 == a2 )
                    {
                      v15 = *(_WORD *)(*v13 + qword_140D04980);
                      if ( ((v15 & 0x20) == 0 || (dword_140C5AFDC & 4) != 0)
                        && ((v15 & 0x40) == 0 || (dword_140C5AFDC & 0x10) != 0) )
                      {
                        break;
                      }
                    }
                  }
                  ++v12;
                  v13 += 3;
                  if ( v12 >= *((unsigned __int16 *)qword_140D01440 + 18) )
                    goto LABEL_20;
                }
                if ( v7 == 1 )
                {
                  v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_140D04970 + 12LL * v12, a4, v9);
                }
                else
                {
                  v8 = 0;
                  v16 = *(unsigned int *)(qword_140D04970 + 12LL * v12 + 8);
                  if ( (*(_BYTE *)(v16 + qword_140D04980) & 0x1F) != 8 || *(_WORD *)(v16 + qword_140D04980 + 2) )
                    v8 = -1069350910;
                }
              }
              goto LABEL_56;
            }
          }
        }
      }
    }
LABEL_55:
    v8 = -1073741811;
    goto LABEL_56;
  }
  if ( a2 || a3 || a4 || (_DWORD)Size )
    goto LABEL_55;
  v18 = 0;
  if ( !_InterlockedCompareExchange(&dword_140D0497C, 0, 0) )
  {
    v8 = SepSecureBootCorrectBcd(v7);
    v18 = v8;
    if ( v8 < 0 )
      goto LABEL_56;
    _InterlockedExchange(&dword_140D0497C, 1);
  }
  v8 = v18;
LABEL_56:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return (unsigned int)v8;
}
