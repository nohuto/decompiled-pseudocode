/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c_____lambda_a9307fb14462ef19126b81021743ae0c___ @ 0x1804E351C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a9307fb14462ef19126b81021743ae0c___ @ 0x1804E3B20 (Windows--Internal--ComTaskPool--QueueTask__lambda_a9307fb14462ef19126b81021743ae0c___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c_____lambda_a9307fb14462ef19126b81021743ae0c___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v5[2] = *(_QWORD *)a2;
    v6 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    v5[3] = v6;
    v5[4] = *(_QWORD *)(a2 + 16);
    *((_DWORD *)v5 + 10) = *(_DWORD *)(a2 + 24);
    *v5 = off_1807DFBA8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
