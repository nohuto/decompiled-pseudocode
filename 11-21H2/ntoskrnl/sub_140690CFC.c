/*
 * XREFs of sub_140690CFC @ 0x140690CFC
 * Callers:
 *     sub_140692780 @ 0x140692780 (sub_140692780.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     PsGetJobSilo @ 0x140212000 (PsGetJobSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F6170 @ 0x1402F6170 (sub_1402F6170.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140690FAC @ 0x140690FAC (sub_140690FAC.c)
 *     sub_140690FEC @ 0x140690FEC (sub_140690FEC.c)
 *     sub_14069186C @ 0x14069186C (sub_14069186C.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     sub_1407F6200 @ 0x1407F6200 (sub_1407F6200.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140690CFC(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        PVOID Object,
        unsigned __int64 a6)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // ecx
  unsigned int v13; // r10d
  void *v14; // rcx
  int JobSilo; // ebx
  unsigned __int64 v16; // rdi
  _WORD *PoolWithTag; // rbx
  void *Src[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h]
  __int128 v21; // [rsp+60h] [rbp-10h]

  Object = 0LL;
  a6 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( !SeSinglePrivilegeCheck(stru_140D3CA58, a3) || !SeSinglePrivilegeCheck(stru_140D3CA70, a3) )
    return (unsigned int)-1073741727;
  if ( a2 < 0x30 )
    return (unsigned int)-1073741811;
  v9 = *(unsigned __int16 *)(a1 + 20);
  if ( (v9 & 1) != 0 )
    return (unsigned int)-1073741811;
  v10 = *(unsigned __int16 *)(a1 + 22);
  if ( (v10 & 1) != 0 )
    return (unsigned int)-1073741811;
  v11 = *(unsigned __int16 *)(a1 + 24);
  if ( (v11 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v9 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v10 )
    return (unsigned int)-1073741811;
  v12 = v9 + 40;
  v13 = v12 + v10;
  if ( v12 > v12 + (unsigned int)v10
    || v13 > v13 + v11
    || a2 < v13 + v11
    || (*(_DWORD *)(a1 + 12) & 1) != 0 && !(_WORD)v11 )
  {
    return (unsigned int)-1073741811;
  }
  WORD1(Src[0]) = *(_WORD *)(a1 + 20);
  LOWORD(Src[0]) = v9;
  Src[1] = (void *)(a1 + 40);
  WORD1(v21) = v10;
  LOWORD(v21) = v10;
  v14 = *(void **)a1;
  *((_QWORD *)&v21 + 1) = a1 + 40 + 2 * (v9 >> 1);
  WORD1(v20) = v11;
  LOWORD(v20) = v11;
  *((_QWORD *)&v20 + 1) = *((_QWORD *)&v21 + 1) + 2 * (v10 >> 1);
  JobSilo = ObReferenceObjectByHandleWithTag(v14, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( sub_1402F6170((__int64)KeGetCurrentThread(), 0LL) )
      {
        JobSilo = -1073741811;
      }
      else
      {
        JobSilo = PsGetPermanentSiloContext(0LL, dword_140C48D10, &a6);
        if ( JobSilo < 0 )
          goto LABEL_22;
        v16 = a6;
        sub_14069186C(a6);
        if ( *(_DWORD *)(v16 + 84) )
        {
          JobSilo = -1073741738;
        }
        else
        {
          JobSilo = sub_140690FEC(
                      (PCUNICODE_STRING)Src,
                      *(_DWORD *)(a1 + 12) & 1,
                      (*(_DWORD *)(a1 + 12) >> 1) & 1,
                      (*(_DWORD *)(a1 + 12) >> 2) & 1,
                      *(_QWORD *)(a1 + 32));
          if ( JobSilo >= 0 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)LOWORD(Src[0]) + 10, 0x67655256u);
            if ( PoolWithTag )
            {
              PoolWithTag[4] = Src[0];
              memmove(PoolWithTag + 5, Src[1], LOWORD(Src[0]));
              *(_QWORD *)PoolWithTag = *(_QWORD *)(v16 + 24);
              *(_QWORD *)(v16 + 24) = PoolWithTag;
              sub_140690FAC(v16);
              JobSilo = 0;
              goto LABEL_22;
            }
            JobSilo = -1073741670;
            sub_1407F6200((PCUNICODE_STRING)Src);
          }
        }
        sub_140690FAC(v16);
      }
    }
  }
LABEL_22:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
