/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cc7fada248b85e5d1b4f2443fa1ae7ed_____lambda_cc7fada248b85e5d1b4f2443fa1ae7ed___ @ 0x1800EA138
 * Callers:
 *     _lambda_4a5b095ff0d9349924b6274c14ba96ea_::operator() @ 0x1801A8D20 (_lambda_4a5b095ff0d9349924b6274c14ba96ea_--operator().c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cc7fada248b85e5d1b4f2443fa1ae7ed_____lambda_cc7fada248b85e5d1b4f2443fa1ae7ed___(
        _QWORD *a1,
        _BYTE *a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  _QWORD *v6; // rcx

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v6 = a2 + 8;
    v5[16] = *a2;
    *((_QWORD *)v5 + 3) = 0LL;
    if ( v5 + 24 != a2 + 8 )
    {
      *((_QWORD *)v5 + 3) = *v6;
      *v6 = 0LL;
    }
    *(_QWORD *)v5 = off_1807A2C40;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v5;
  }
  return a1;
}
