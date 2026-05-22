/*
 * XREFs of ?SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z @ 0x180178CF4
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180175E7C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180178BF4 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::SendPointerDelta(ControllerProcessor *this, struct tagPOINT a2)
{
  LONG x; // ebx
  DWORD TickCount; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  struct tagPOINT v7; // [rsp+28h] [rbp-D8h]
  _DWORD v8[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v9; // [rsp+40h] [rbp-C0h]
  int v10; // [rsp+48h] [rbp-B8h]
  __int64 v11; // [rsp+50h] [rbp-B0h]
  __int16 v12; // [rsp+8Ah] [rbp-76h]
  LONG v13; // [rsp+94h] [rbp-6Ch]
  LONG y; // [rsp+98h] [rbp-68h]

  v7 = a2;
  x = a2.x;
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v8, 0, 0x218uLL);
  v10 = 536;
  v8[0] = 4096;
  TickCount = GetTickCount();
  v13 = x;
  v8[2] = TickCount;
  v9 = PerformanceCount;
  v11 = *((_QWORD *)this + 38);
  v12 = 0;
  y = v7.y;
  return ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v8);
}
