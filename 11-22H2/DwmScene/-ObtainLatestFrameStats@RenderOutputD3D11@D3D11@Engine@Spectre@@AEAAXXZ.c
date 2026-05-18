/*
 * XREFs of ?ObtainLatestFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA1B8
 * Callers:
 *     ?Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x1800CA290 (-Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800C889C (--$_Try_emplace@AEBI$$V@-$map@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800C8990 (--$_Try_emplace@AEBI$$V@-$map@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::ObtainLatestFrameStats(
        Spectre::Engine::D3D11::RenderOutputD3D11 *this)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int128 v5; // [rsp+30h] [rbp-58h]
  _BYTE v6[16]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v7; // [rsp+50h] [rbp-38h] BYREF
  __int128 v8; // [rsp+60h] [rbp-28h]

  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 63) + 128LL))(
          *((_QWORD *)this + 63),
          &v7) )
  {
    if ( (_DWORD)v7 )
    {
      v5 = v8;
      v2 = v7;
      v3 = *(_QWORD *)std::map<unsigned int,DXGI_FRAME_STATISTICS>::_Try_emplace<unsigned int const &,>(
                        (__int64 *)this + 206,
                        (__int64)v6,
                        (unsigned int *)&v7);
      *(_OWORD *)(v3 + 40) = v2;
      *(_OWORD *)(v3 + 56) = v5;
      v4 = *(_QWORD *)std::map<unsigned int,_LARGE_INTEGER>::_Try_emplace<unsigned int const &,>(
                        (__int64 *)this + 208,
                        (__int64)v6,
                        (unsigned int *)&v7 + 2);
      *(_QWORD *)(v4 + 40) = v8;
    }
  }
}
