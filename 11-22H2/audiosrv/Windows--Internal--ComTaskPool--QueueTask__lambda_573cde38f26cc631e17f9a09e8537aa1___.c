/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_573cde38f26cc631e17f9a09e8537aa1___ @ 0x18015964C
 * Callers:
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x18015C3E0 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1___::CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1_____lambda_573cde38f26cc631e17f9a09e8537aa1___ @ 0x180159380 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_573cde38f26cc631e17f9a09e8537aa1___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1___::CTaskWrapper__lambda_573cde38f26cc631e17f9a09e8537aa1_____lambda_573cde38f26cc631e17f9a09e8537aa1___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
