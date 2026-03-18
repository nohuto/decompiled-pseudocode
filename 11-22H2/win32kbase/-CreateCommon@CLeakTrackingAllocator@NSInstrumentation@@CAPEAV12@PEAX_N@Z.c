/*
 * XREFs of ?CreateCommon@CLeakTrackingAllocator@NSInstrumentation@@CAPEAV12@PEAX_N@Z @ 0x1C00C2BB0
 * Callers:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C00C5B60 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C016E108 (-CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     ?CreatePoolTagTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAXPEAII_N@Z @ 0x1C016E154 (-CreatePoolTagTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAXPEAII_N@Z.c)
 * Callees:
 *     <none>
 */

struct NSInstrumentation::CLeakTrackingAllocator *__fastcall NSInstrumentation::CLeakTrackingAllocator::CreateCommon(
        void *a1)
{
  struct NSInstrumentation::CLeakTrackingAllocator *result; // rax

  dword_1C0293EA0 = 0;
  qword_1C0293EA8 = 0LL;
  qword_1C0293EC8 = 0LL;
  qword_1C0293EB0 = 0LL;
  dword_1C0293EC0 = 0;
  qword_1C0293EF0 = 0LL;
  qword_1C0293EF8 = 0LL;
  byte_1C0293F30 = 0;
  result = (struct NSInstrumentation::CLeakTrackingAllocator *)&dword_1C0293EA0;
  xmmword_1C0293F10 = 0LL;
  xmmword_1C0293F20 = 0LL;
  xmmword_1C0293F00 = 0LL;
  return result;
}
