/*
 * XREFs of sub_1409CD880 @ 0x1409CD880
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_1409CDCC8 @ 0x1409CDCC8 (sub_1409CDCC8.c)
 *     sub_1409CE294 @ 0x1409CE294 (sub_1409CE294.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409CD880(unsigned int a1, int a2, unsigned int a3, _QWORD *a4, size_t Size)
{
  unsigned int v7; // r15d
  int v8; // edi
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rsi
  unsigned int v13; // r8d
  unsigned int *v14; // rdx
  int v15; // eax
  __int16 v16; // r10
  __int64 v17; // rcx
  BOOLEAN IsMember[4]; // [rsp+20h] [rbp-48h] BYREF
  int v20; // [rsp+24h] [rbp-44h]
  PVOID P; // [rsp+28h] [rbp-40h]
  _QWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF

  v7 = a1;
  P = 0LL;
  v22[0] = 0LL;
  IsMember[0] = SeSinglePrivilegeCheck(stru_140D3CA10, *((_BYTE *)KeGetCurrentThread() + 562));
  if ( !IsMember[0] && (RtlCheckTokenMembership(0LL, SidToCheck, IsMember) < 0 || !IsMember[0]) )
  {
    v8 = -1073741790;
    goto LABEL_58;
  }
  if ( !qword_140D01440 )
  {
    v8 = -2143092730;
    goto LABEL_58;
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
LABEL_22:
                v8 = 0;
                goto LABEL_58;
              }
              if ( *((_BYTE *)KeGetCurrentThread() + 562) )
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
                    v20 = -1073741801;
                    goto LABEL_58;
                  }
                  v12 = P;
                  memmove(P, a4, (unsigned int)Size);
                  a4 = v12;
                }
                else
                {
                  memmove(v22, a4, (unsigned int)Size);
                  a4 = v22;
                }
                v7 = a1;
              }
              goto LABEL_33;
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
        goto LABEL_58;
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
                goto LABEL_22;
LABEL_33:
              v13 = 0;
              v8 = 0;
              if ( *((_WORD *)qword_140D01440 + 18) )
              {
                v14 = (unsigned int *)(qword_140D04970 + 8);
                while ( 1 )
                {
                  if ( *(v14 - 1) == a3 )
                  {
                    v15 = *(v14 - 2);
                    if ( !v15 || v15 == a2 )
                    {
                      v16 = *(_WORD *)(*v14 + qword_140D04980);
                      if ( ((v16 & 0x20) == 0 || (dword_140C5AFDC & 4) != 0)
                        && ((v16 & 0x40) == 0 || (dword_140C5AFDC & 0x10) != 0) )
                      {
                        break;
                      }
                    }
                  }
                  ++v13;
                  v14 += 3;
                  if ( v13 >= *((unsigned __int16 *)qword_140D01440 + 18) )
                    goto LABEL_22;
                }
                if ( v7 == 1 )
                {
                  v8 = sub_1409CE294(qword_140D04970 + 12LL * v13, a4, v9);
                }
                else
                {
                  v8 = 0;
                  v17 = *(unsigned int *)(qword_140D04970 + 12LL * v13 + 8);
                  if ( (*(_BYTE *)(v17 + qword_140D04980) & 0x1F) != 8 || *(_WORD *)(v17 + qword_140D04980 + 2) )
                    v8 = -1069350910;
                }
              }
              goto LABEL_58;
            }
          }
        }
      }
    }
LABEL_57:
    v8 = -1073741811;
    goto LABEL_58;
  }
  if ( a2 || a3 || a4 || (_DWORD)Size )
    goto LABEL_57;
  v20 = 0;
  if ( !_InterlockedCompareExchange(&dword_140D0497C, 0, 0) )
  {
    v8 = sub_1409CDCC8(v7);
    v20 = v8;
    if ( v8 < 0 )
      goto LABEL_58;
    _InterlockedExchange(&dword_140D0497C, 1);
  }
  v8 = v20;
LABEL_58:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return (unsigned int)v8;
}
