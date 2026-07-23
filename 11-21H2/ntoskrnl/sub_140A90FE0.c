/*
 * XREFs of sub_140A90FE0 @ 0x140A90FE0
 * Callers:
 *     sub_140A80D10 @ 0x140A80D10 (sub_140A80D10.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140602294 @ 0x140602294 (sub_140602294.c)
 *     sub_1406022DC @ 0x1406022DC (sub_1406022DC.c)
 *     sub_140A81AE8 @ 0x140A81AE8 (sub_140A81AE8.c)
 *     sub_140A91368 @ 0x140A91368 (sub_140A91368.c)
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

__int64 __fastcall sub_140A90FE0(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  KIRQL v12; // al
  bool v13; // zf
  unsigned __int64 v14; // rbx
  KIRQL v16[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  v9 = sub_140AA5A48(a2);
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    if ( a3 == *(_QWORD *)(v9 + 216) )
    {
      v11 = *(_DWORD *)(v9 + 56);
      if ( v11 >= 0 )
      {
        v8 = 1;
        *((_DWORD *)v10 + 14) = v11 | 0x80000000;
      }
    }
    sub_140AA5BCC(v10);
    if ( v8 )
    {
      v8 = sub_140A91368(a1, (_DWORD)v10, a3, a4, a5);
      if ( !v8 )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(v10 + 1);
        v13 = (*((_DWORD *)v10 + 6))-- == 1;
        *((_BYTE *)v10 + 16) = v12;
        v16[0] = 0;
        if ( v13 )
        {
          sub_140602294(v16);
          v14 = *v10;
          sub_14042A5E0(v10, *v10);
          *v10 = 0LL;
          sub_140A81AE8((_QWORD *)(qword_140C1ADF8 + 16LL * (unsigned __int8)(-125 * (v14 >> 12))), v14);
          sub_1406022DC(v16[0]);
        }
        _InterlockedDecrement((volatile signed __int32 *)v10 + 5);
        sub_140AA5BCC(v10);
      }
    }
  }
  return v8;
}
