/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967_____lambda_ac4863598604ec72e89080dc7a8a9967___ @ 0x1800391E4
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_3c3f7fc14656b421e82e3329d2a90f9b___ @ 0x1800390DC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_3c3f7fc14656b421e82e3329d2a90f9b___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967_____lambda_ac4863598604ec72e89080dc7a8a9967___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rsi

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    v5[2] = 0LL;
    if ( v5 + 2 != a2 )
    {
      v5[2] = *a2;
      *a2 = 0LL;
    }
    v6 = a2[1];
    v7 = a2 + 2;
    v5[3] = v6;
    v5[4] = 0LL;
    if ( v5 + 4 != v7 )
    {
      v5[4] = *v7;
      *v7 = 0LL;
    }
    *v5 = off_1807AFE28;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v5;
  }
  return a1;
}
