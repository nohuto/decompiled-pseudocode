/*
 * XREFs of ??$make_unique@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U123456@$0A@@std@@YA?AV?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@0@$$QEAUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@Z @ 0x1800A4B88
 * Callers:
 *     ?EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11Device@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A5D8C (-EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXU_LUID@@PEAUID3D11D.c)
 *     ?RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@std@@@std@@PEAVDeviceClient@2345@PEAPEAUSharedDevice@12345@@Z @ 0x1800A65A0 (-RemoveSharedDeviceClient@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAXV-$_List_ite.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,0>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r9
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *result; // rax

  v4 = operator new(0x28uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *a2;
    *a2 = 0LL;
    *v4 = v6;
    v7 = a2[1];
    a2[1] = 0LL;
    v4[1] = v7;
    v8 = a2[4];
    v9 = a2[3];
    v10 = a2[2];
    a2[4] = 0LL;
    a2[3] = 0LL;
    a2[2] = 0LL;
    v5[2] = v10;
    v5[3] = v9;
    v5[4] = v8;
  }
  else
  {
    v5 = 0LL;
  }
  result = a1;
  *a1 = v5;
  return result;
}
