/*
 * XREFs of ??$make_shared@VSharedD3DDevicePool@Internal@Composition@UI@Windows@@$$V@std@@YA?AV?$shared_ptr@VSharedD3DDevicePool@Internal@Composition@UI@Windows@@@0@XZ @ 0x1800A4B08
 * Callers:
 *     ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC (-Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??0?$unordered_map@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$hash@_J@std@@U?$equal_to@_J@8@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@@std@@QEAA@XZ @ 0x1800A4DCC (--0-$unordered_map@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U-$hash@.c)
 */

__int64 *std::make_shared<Windows::UI::Composition::Internal::SharedD3DDevicePool,>()
{
  _QWORD *v0; // rax
  std::_Ref_count_base *v1; // rdi
  __int64 *result; // rax

  v0 = operator new(0x58uLL);
  v1 = (std::_Ref_count_base *)v0;
  if ( v0 )
  {
    *((_DWORD *)v0 + 2) = 1;
    *((_DWORD *)v0 + 3) = 1;
    *v0 = &std::_Ref_count_obj2<Windows::UI::Composition::Internal::SharedD3DDevicePool>::`vftable';
    memset_0(v0 + 2, 0, 0x48uLL);
    std::unordered_map<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::unordered_map<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>((char *)v1 + 16);
    *((_QWORD *)v1 + 10) = 0LL;
  }
  else
  {
    v1 = 0LL;
  }
  qword_180220B10 = (__int64)v1 + 16;
  result = &qword_180220B10;
  qword_180220B18 = v1;
  return result;
}
