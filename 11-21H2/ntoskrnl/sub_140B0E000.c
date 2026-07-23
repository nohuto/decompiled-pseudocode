/*
 * XREFs of sub_140B0E000 @ 0x140B0E000
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 *     ZwLockProductActivationKeys @ 0x14041D9A0 (ZwLockProductActivationKeys.c)
 *     sub_14082D70C @ 0x14082D70C (sub_14082D70C.c)
 */

__int64 *sub_140B0E000()
{
  __int64 v0; // r8
  __int64 *result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  ZwLockProductActivationKeys(0LL, 0LL);
  if ( !byte_140C0DD10 )
  {
    if ( (int)sub_14082D70C(&Time) < 0 )
      Time.QuadPart = 0LL;
    MEMORY[0xFFFFF780000002C8] = Time.QuadPart;
    byte_140D3CA37 = 0;
  }
  LODWORD(dword_140C15980) = 275;
  qword_140C15998 = (__int64)sub_1403A13C0;
  qword_140C159B8 = 0LL;
  qword_140C159A0 = (__int64)&dword_140C15A48;
  qword_140C15990 = 0LL;
  stru_140C15AA0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140A531E0;
  stru_140C15AA0.Parameter = 0LL;
  stru_140C15AA0.List.Flink = 0LL;
  word_140C159C2 = 0;
  sub_1403588EC((__int64)&unk_140C159C0, (__int64)sub_1403A1540, 0LL, 8);
  v2[1] = -1LL;
  v2[0] = 0LL;
  qword_140C15B50 = -36000000000LL;
  KeSetTimer2((__int64)&unk_140C159C0, -36000000000LL, v0, (__int64)v2);
  ExInitializeResourceLite(&stru_140C15AC0);
  result = &qword_140C15B40;
  qword_140C15B48 = (__int64)&qword_140C15B40;
  qword_140C15B40 = (__int64)&qword_140C15B40;
  return result;
}
