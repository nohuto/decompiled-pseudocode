/*
 * XREFs of ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D0B1C
 * Callers:
 *     xxxProcessHidInput @ 0x1C01D1B50 (xxxProcessHidInput.c)
 * Callees:
 *     AllocateHidData @ 0x1C0001B1C (AllocateHidData.c)
 *     FreeHidData @ 0x1C0003270 (FreeHidData.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?DeliverRawInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z @ 0x1C01D09C0 (-DeliverRawInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z.c)
 */

__int64 __fastcall PostHidInput(struct DEVICEINFO *a1, struct tagQ *a2, struct tagWND *a3, unsigned __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v9; // ebp
  char *HidData; // rax
  char *v11; // rbx

  v5 = *((_DWORD *)a1 + 66);
  v9 = *(unsigned __int16 *)(*((_QWORD *)a1 + 57) + 44LL);
  if ( v5 % v9 )
    return 0LL;
  if ( !(v5 / v9) )
    return 0LL;
  if ( v5 >= 0xFFFFFFF8 )
    return 0LL;
  HidData = (char *)AllocateHidData(*(_QWORD *)a1, 2, v5 + 8, a4, (__int64)a3);
  v11 = HidData;
  if ( !HidData )
    return 0LL;
  *((_DWORD *)HidData + 14) = v9;
  *((_DWORD *)HidData + 15) = v5 / v9;
  memmove(HidData + 64, *(const void **)(*((_QWORD *)a1 + 57) + 24LL), v5);
  InputTraceLogging::RIM::DeliverRawInput(a1);
  if ( !(unsigned int)PostInputMessage(a2, a3, 0xFFu, a4, *(_QWORD *)v11, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, 0, 0LL) )
  {
    FreeHidData(v11);
    return 0LL;
  }
  return 1LL;
}
