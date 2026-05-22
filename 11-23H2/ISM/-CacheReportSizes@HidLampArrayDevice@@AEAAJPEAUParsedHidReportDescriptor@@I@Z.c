/*
 * XREFs of ?CacheReportSizes@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800F0330
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800F0E84 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057640 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::CacheReportSizes(
        HidLampArrayDevice *this,
        struct ParsedHidReportDescriptor *a2,
        unsigned int a3)
{
  __int64 v6; // rbp
  size_t v7; // rax
  void *v8; // rax
  void *v9; // rcx
  __int64 v10; // rbx
  void *v11; // rcx
  _DWORD *v13; // r8
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 158) = a3;
  v6 = a3;
  v7 = 8LL * a3;
  if ( !is_mul_ok(a3, 8uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (void *)*((_QWORD *)this + 78);
  v10 = 0LL;
  *((_QWORD *)this + 78) = v8;
  if ( v9 )
    operator delete[](v9);
  v11 = (void *)*((_QWORD *)this + 78);
  if ( v11 )
  {
    memset_0(v11, 0, 8LL * *((unsigned int *)this + 158));
    if ( a3 )
    {
      v13 = (_DWORD *)((char *)a2 + 8);
      do
      {
        *(_BYTE *)(v10 + *((_QWORD *)this + 78)) = *((_BYTE *)v13 - 4);
        v10 += 8LL;
        v14 = *v13;
        v13 += 6;
        *(_DWORD *)(*((_QWORD *)this + 78) + v10 - 4) = (unsigned int)(*(_DWORD *)(*((_QWORD *)v13 - 2)
                                                                                 + 72LL * (unsigned int)(v14 - 1)
                                                                                 + 4)
                                                                     + *(_DWORD *)(*((_QWORD *)v13 - 2)
                                                                                 + 72LL * (unsigned int)(v14 - 1))
                                                                     + 7) >> 3;
        --v6;
      }
      while ( v6 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
