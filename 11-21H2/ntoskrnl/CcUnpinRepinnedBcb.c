/*
 * XREFs of CcUnpinRepinnedBcb @ 0x14053A6C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_140248C10 @ 0x140248C10 (sub_140248C10.c)
 *     sub_14027A1B4 @ 0x14027A1B4 (sub_14027A1B4.c)
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     sub_14033D860 @ 0x14033D860 (sub_14033D860.c)
 *     sub_1403AE0B0 @ 0x1403AE0B0 (sub_1403AE0B0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 */

void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r14
  _QWORD *v9; // r14
  __int64 v10; // r9
  unsigned __int64 v11; // r13

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x2296uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = *((_QWORD *)Bcb + 22);
  v6 = *(_QWORD *)(v5 + 528);
  v7 = *(_QWORD *)(v5 + 592);
  v8 = v6;
  if ( byte_140C54C58 == 1 )
    v8 = *(_QWORD *)(v5 + 592);
  IoStatus->Status = 0;
  v9 = (_QWORD *)(v8 + 1104);
  if ( WriteThrough )
  {
    if ( (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Bcb + 72), 1u);
    if ( *((_BYTE *)Bcb + 2) )
    {
      sub_14033D860(*((_QWORD *)Bcb + 23), *((unsigned int *)Bcb + 1));
      sub_14028A370((char *)Bcb, 1, 2);
      v11 = sub_14027A1B4(v5);
      if ( (xmmword_140D06910 & 0x20000) != 0 )
        sub_1403AE0B0(0LL, v5, (__int64 *)Bcb + 1, *((_DWORD *)Bcb + 1), 1);
      sub_140283C50(*(_QWORD *)(v11 + 40), (__int64 *)Bcb + 1, *((unsigned int *)Bcb + 1), v10, IoStatus, 1);
      sub_140230680((signed __int64 *)(v5 + 96), v11, 0x63536343u);
      if ( IoStatus->Status < 0 && !sub_140248C10(*((_QWORD *)Bcb + 22), IoStatus->Status) )
        CcSetDirtyPinnedData(Bcb, 0LL);
      sub_14028A370((char *)Bcb, 0, 0);
      if ( (_QWORD *)*v9 != v9 )
        sub_14053A100(v6, v7);
    }
    else
    {
      sub_14028A370((char *)Bcb, 0, 0);
    }
  }
  else
  {
    sub_14028A370((char *)Bcb, 1, 0);
    IoStatus->Status = 0;
  }
}
