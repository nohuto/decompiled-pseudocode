/*
 * XREFs of sub_140569CA0 @ 0x140569CA0
 * Callers:
 *     sub_140569910 @ 0x140569910 (sub_140569910.c)
 * Callees:
 *     sub_14054EA40 @ 0x14054EA40 (sub_14054EA40.c)
 *     sub_1405694C0 @ 0x1405694C0 (sub_1405694C0.c)
 *     sub_140569604 @ 0x140569604 (sub_140569604.c)
 *     sub_1405696DC @ 0x1405696DC (sub_1405696DC.c)
 */

__int64 __fastcall sub_140569CA0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  unsigned int v5; // esi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // rcx
  _QWORD *v11; // r9
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  _QWORD v17[2]; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+44h] [rbp-34h]
  int v20; // [rsp+4Ch] [rbp-2Ch]
  unsigned __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 352);
  v2 = 0;
  v21 = 0LL;
  __asm { rdsspq  rdi }
  v5 = 2;
  if ( (unsigned __int64)(v1 - 1) <= 1 && (_RDI & 7) == 0 )
  {
    v6 = **(_QWORD **)(a1 + 384);
    if ( v6 >= 0xFFFF800000000000uLL )
    {
      v7 = sub_140569604(&v21);
      v8 = *(_QWORD *)(a1 + 216);
      v9 = v7;
      v10 = *(_QWORD *)(a1 + 352);
      v11 = (_QWORD *)(v8 + 32);
      if ( v10 == 1 )
      {
        while ( (unsigned __int64)v11 < v21 )
        {
          if ( *v11 >= 0x10000uLL && *v11 == v6 )
          {
            if ( (int)sub_14054EA40(0, v8, 0LL, (ULONG_PTR)v11, 0LL, 4) >= 0 )
              v5 = 1;
            _InterlockedAdd(&dword_140D07068, 1u);
            return v5;
          }
          ++v11;
        }
      }
      v12 = 0LL;
      if ( (_BYTE)byte_140E01843 )
      {
        v13 = (*((_QWORD *)KeGetCurrentThread() + 132) & 0xFFFFFFFFFFFFF000uLL) + 4096;
        if ( _RDI >= v13 && _RDI <= v13 + 640 )
          v12 = _RDI + 2048;
        if ( (int)sub_1405694C0(v9, v8, v6, v12, v10 == 2) >= 0 )
        {
          v14 = *(_DWORD *)(a1 + 352);
          v15 = *(_QWORD *)(a1 + 360);
          v19 = 0LL;
          v5 = 1;
          LOBYTE(v2) = v12 != 0;
          v18 = v14;
          v20 = v2;
          v17[0] = v15;
          v17[1] = v6;
          sub_1405696DC(1u, (__int64)v17);
        }
      }
    }
  }
  return v5;
}
