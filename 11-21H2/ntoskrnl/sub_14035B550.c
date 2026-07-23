/*
 * XREFs of sub_14035B550 @ 0x14035B550
 * Callers:
 *     sub_1402095F0 @ 0x1402095F0 (sub_1402095F0.c)
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     sub_140234888 @ 0x140234888 (sub_140234888.c)
 *     sub_140234B28 @ 0x140234B28 (sub_140234B28.c)
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     sub_1402F0604 @ 0x1402F0604 (sub_1402F0604.c)
 *     sub_1402F0D90 @ 0x1402F0D90 (sub_1402F0D90.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     sub_1402F6750 @ 0x1402F6750 (sub_1402F6750.c)
 *     sub_1402F8040 @ 0x1402F8040 (sub_1402F8040.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     sub_140311A50 @ 0x140311A50 (sub_140311A50.c)
 *     sub_1403595B4 @ 0x1403595B4 (sub_1403595B4.c)
 *     sub_14035A850 @ 0x14035A850 (sub_14035A850.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_14035B608 @ 0x14035B608 (sub_14035B608.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 *     KeInsertHeadQueue @ 0x140570CF0 (KeInsertHeadQueue.c)
 * Callees:
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     sub_14035B608 @ 0x14035B608 (sub_14035B608.c)
 */

__int64 __fastcall sub_14035B550(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  char v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx

  v2 = *(_QWORD **)(a2 + 16);
  do
  {
    result = (__int64)v2;
    v2 = (_QWORD *)v2[1];
    v6 = *(_BYTE *)(result + 16);
    if ( v6 == 2 )
    {
      v8 = *(_QWORD *)result;
      if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v2 != result )
        goto LABEL_12;
      *v2 = v8;
      *(_QWORD *)(v8 + 8) = v2;
      *(_BYTE *)(result + 17) = 5;
      sub_14035B608(*(_QWORD *)(result + 24), result);
    }
    else
    {
      if ( v6 != 1 )
        return result;
      v7 = *(_QWORD *)result;
      if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v2 != result )
LABEL_12:
        __fastfail(3u);
      *v2 = v7;
      *(_QWORD *)(v7 + 8) = v2;
      sub_1402F6BC0(a1, result, *(unsigned __int16 *)(result + 18), 0LL);
    }
    result = a2 + 8;
  }
  while ( v2 != (_QWORD *)(a2 + 8) );
  return result;
}
