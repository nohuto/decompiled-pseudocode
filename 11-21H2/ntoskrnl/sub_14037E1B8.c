/*
 * XREFs of sub_14037E1B8 @ 0x14037E1B8
 * Callers:
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 * Callees:
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14037E338 @ 0x14037E338 (sub_14037E338.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14037E1B8(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 *v6; // r13
  int v7; // edi
  unsigned int v8; // ebp
  __int64 v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // r10
  unsigned int v12; // esi
  __int64 v13; // r14
  int v14; // r12d
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r14d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax
  bool v22; // zf
  __int64 v23; // [rsp+30h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  unsigned int v25; // [rsp+90h] [rbp+8h]
  unsigned __int8 v26; // [rsp+98h] [rbp+10h]

  result = (__int64)&retaddr;
  v5 = 0;
  v6 = (__int64 *)(a3 + 48);
  v7 = 0;
  v25 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = a3;
  v12 = 16;
  if ( a4 )
  {
    do
    {
      result = *v6;
      if ( *v6 == qword_140C53278 )
      {
        v14 = 16;
        v17 = v8;
      }
      else
      {
        v13 = 48 * result - 0x220000000000LL;
        v23 = v13;
        v26 = sub_1402F2700(v13);
        v14 = (unsigned __int8)HIBYTE(*(_WORD *)(v13 + 16)) >> 4;
        v15 = sub_1402E76C0(v13 + 16);
        v16 = v13;
        v17 = v15;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v26 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v20 = *((_QWORD *)CurrentPrcb + 4375);
            v21 = ~(unsigned __int16)(-1LL << (v26 + 1));
            v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
            *(_DWORD *)(v20 + 20) &= v21;
            if ( v22 )
              sub_140418E4C(CurrentPrcb);
          }
          v16 = v23;
        }
        result = v26;
        __writecr8(v26);
        v5 = v25;
        v11 = a3;
        if ( !v9 )
        {
          result = qword_140C51F48;
          v9 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
        }
      }
      if ( v12 == v14 && v17 == v8 )
      {
        ++v7;
      }
      else
      {
        if ( v12 != 16 )
          result = sub_14037E338(*(_QWORD *)(v9 + 8LL * v12 + 16736), v11, v10 - v7, v5, v7);
        v5 = v17;
        v12 = v14;
        v25 = v17;
        v8 = v17;
        v7 = 1;
      }
      v11 = a3;
      ++v10;
      ++v6;
      ++v8;
    }
    while ( v10 < a4 );
    if ( v12 != 16 )
      return sub_14037E338(*(_QWORD *)(v9 + 8LL * v12 + 16736), a3, v10 - v7, v5, v7);
  }
  return result;
}
