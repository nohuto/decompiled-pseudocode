/*
 * XREFs of EtwpFlushBuffer @ 0x1406BD980
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1406BDE48 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1408A7C78 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpFileModeCompress @ 0x1403A695C (EtwpFileModeCompress.c)
 *     EtwpFlushBufferToLogfile @ 0x1406BB400 (EtwpFlushBufferToLogfile.c)
 *     EtwpFlushBufferToRealtime @ 0x1406BD8DC (EtwpFlushBufferToRealtime.c)
 *     EtwpPrepareHeader @ 0x1406BDA6C (EtwpPrepareHeader.c)
 *     EtwpSendSessionNotification @ 0x14077EA10 (EtwpSendSessionNotification.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // edi
  char v4; // r14
  int v5; // esi
  unsigned int *v6; // rbp
  int v8; // eax
  char v9; // r14
  int v11; // eax

  v3 = -1073741823;
  v4 = a3;
  v5 = -1073741823;
  v6 = a2;
  v8 = EtwpPrepareHeader(a1, a2, a3);
  v9 = v4 & 1;
  if ( v8 == -2147483614 && !v9 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 816) & 8) != 0 )
  {
    v3 = EtwpFlushBufferToRealtime(a1, (__int64)v6, v8 == -2147483614);
    if ( v3 < 0 )
      EtwpSendSessionNotification(a1, 4LL);
  }
  if ( *(_QWORD *)(a1 + 800) )
  {
    v11 = *(_DWORD *)(a1 + 12);
    if ( (v11 & 0x4000000) != 0 && (v11 & 1) != 0 && !(unsigned int)EtwpFileModeCompress(a1, (__int64)v6) )
      v6 = *(unsigned int **)(a1 + 1152);
    v5 = EtwpFlushBufferToLogfile(a1, v6);
    if ( v5 < 0 )
      EtwpSendSessionNotification(a1, 3LL);
  }
  if ( (int)(v3 + 0x80000000) < 0 || v3 == -1073741432 || v5 >= 0 )
    return 0LL;
  if ( v5 != -1073741823 )
    return (unsigned int)v5;
  return (unsigned int)v3;
}
