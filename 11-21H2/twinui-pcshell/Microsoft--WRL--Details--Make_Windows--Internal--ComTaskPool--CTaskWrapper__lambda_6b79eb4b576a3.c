/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59_____lambda_6b79eb4b576a38d0be641e968c7b0b59___ @ 0x1800B7EA8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6b79eb4b576a38d0be641e968c7b0b59___ @ 0x1800B7E1C (Windows--Internal--ComTaskPool--QueueTask__lambda_6b79eb4b576a38d0be641e968c7b0b59___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59_____lambda_6b79eb4b576a38d0be641e968c7b0b59___(
        _QWORD *a1,
        _DWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v5[2] = 0LL;
    if ( v5 + 2 != (_QWORD *)a2 )
    {
      v5[2] = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    *((_DWORD *)v5 + 6) = a2[2];
    *((_DWORD *)v5 + 7) = a2[3];
    *((_DWORD *)v5 + 8) = a2[4];
    *v5 = off_180627150;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v5;
  }
  return a1;
}
