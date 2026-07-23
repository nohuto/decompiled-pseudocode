/*
 * XREFs of sub_1402F3290 @ 0x1402F3290
 * Callers:
 *     sub_1402095F0 @ 0x1402095F0 (sub_1402095F0.c)
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_140210EA0 @ 0x140210EA0 (sub_140210EA0.c)
 *     sub_14021119C @ 0x14021119C (sub_14021119C.c)
 *     sub_140211410 @ 0x140211410 (sub_140211410.c)
 *     sub_14021158C @ 0x14021158C (sub_14021158C.c)
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_1402175B8 @ 0x1402175B8 (sub_1402175B8.c)
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     sub_140232968 @ 0x140232968 (sub_140232968.c)
 *     sub_140234764 @ 0x140234764 (sub_140234764.c)
 *     sub_140234888 @ 0x140234888 (sub_140234888.c)
 *     sub_140234B28 @ 0x140234B28 (sub_140234B28.c)
 *     sub_14023C084 @ 0x14023C084 (sub_14023C084.c)
 *     sub_140242498 @ 0x140242498 (sub_140242498.c)
 *     sub_140244508 @ 0x140244508 (sub_140244508.c)
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     sub_14024C7D4 @ 0x14024C7D4 (sub_14024C7D4.c)
 *     sub_140259330 @ 0x140259330 (sub_140259330.c)
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D0CE0 @ 0x1402D0CE0 (sub_1402D0CE0.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_1402EE104 @ 0x1402EE104 (sub_1402EE104.c)
 *     sub_1402EE3D8 @ 0x1402EE3D8 (sub_1402EE3D8.c)
 *     sub_1402EE4D4 @ 0x1402EE4D4 (sub_1402EE4D4.c)
 *     sub_1402EEAA8 @ 0x1402EEAA8 (sub_1402EEAA8.c)
 *     sub_1402EF5FC @ 0x1402EF5FC (sub_1402EF5FC.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     sub_1402F0604 @ 0x1402F0604 (sub_1402F0604.c)
 *     sub_1402F0D90 @ 0x1402F0D90 (sub_1402F0D90.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_1402F27B0 @ 0x1402F27B0 (sub_1402F27B0.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     sub_1402F6750 @ 0x1402F6750 (sub_1402F6750.c)
 *     sub_1402F8040 @ 0x1402F8040 (sub_1402F8040.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     sub_140311A50 @ 0x140311A50 (sub_140311A50.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 *     sub_1403470F0 @ 0x1403470F0 (sub_1403470F0.c)
 *     sub_14035432C @ 0x14035432C (sub_14035432C.c)
 *     sub_1403595B4 @ 0x1403595B4 (sub_1403595B4.c)
 *     sub_14035A850 @ 0x14035A850 (sub_14035A850.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_14035B608 @ 0x14035B608 (sub_14035B608.c)
 *     sub_14035B8F4 @ 0x14035B8F4 (sub_14035B8F4.c)
 *     sub_14035F27C @ 0x14035F27C (sub_14035F27C.c)
 *     sub_140565F08 @ 0x140565F08 (sub_140565F08.c)
 *     sub_14056C540 @ 0x14056C540 (sub_14056C540.c)
 *     sub_14056DF08 @ 0x14056DF08 (sub_14056DF08.c)
 *     sub_140570BD0 @ 0x140570BD0 (sub_140570BD0.c)
 *     KeInsertHeadQueue @ 0x140570CF0 (KeInsertHeadQueue.c)
 *     sub_140573898 @ 0x140573898 (sub_140573898.c)
 *     sub_140578730 @ 0x140578730 (sub_140578730.c)
 *     sub_14057B42C @ 0x14057B42C (sub_14057B42C.c)
 *     sub_1405E11E4 @ 0x1405E11E4 (sub_1405E11E4.c)
 *     sub_14063F394 @ 0x14063F394 (sub_14063F394.c)
 * Callees:
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 */

void __fastcall sub_1402F3290(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v4 & dword_140D0527C) == 0
        && (dword_140D0689C & 0x40) != 0
        && (unsigned __int8)sub_14039EA10(a1, a2, a3, a4) )
      {
        sub_14039D930(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*a1 & 0x80u) != 0 || _interlockedbittestandset(a1, 7u) );
  }
}
