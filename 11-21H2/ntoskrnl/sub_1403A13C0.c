/*
 * XREFs of sub_1403A13C0 @ 0x1403A13C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x1403E0F50 (_local_unwind.c)
 *     sub_1403FAD10 @ 0x1403FAD10 (sub_1403FAD10.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14042C090 @ 0x14042C090 (sub_14042C090.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1403A13C0(__int64 a1, volatile signed __int32 *a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD v8[58]; // [rsp+0h] [rbp-1D8h] BYREF

  v8[55] = v8;
  memset(&v8[42], 0, 0x60uLL);
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    LODWORD(v8[7]) = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v8[53] = a3;
    v8[50] = __ROL8__(a2, a3);
    v8[45] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    sub_14042C090(a2);
  }
  if ( _InterlockedIncrement(a2) == 1 )
    ExQueueWorkItem(&stru_140C15AA0, DelayedWorkQueue);
}
