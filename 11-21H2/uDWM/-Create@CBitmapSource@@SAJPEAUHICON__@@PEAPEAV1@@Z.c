/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18001A6D0
 * Callers:
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18001B3F8 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18004B430 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18001A79C (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18001AA4C (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(HICON a1, struct CBitmapSource **a2)
{
  __int64 v4; // rax
  CBaseObject *v5; // rbx
  int v6; // eax
  unsigned int v7; // esi
  int v8; // r9d
  unsigned int v10; // eax

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v5 = (CBaseObject *)v4;
  if ( !v4 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6Du);
    return v7;
  }
  *(_DWORD *)(v4 + 8) = 1;
  *(_QWORD *)v4 = &CBitmapSource::`vftable';
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_DWORD *)(v4 + 80) = 0x80000000;
  *(_DWORD *)(v4 + 88) = 0x80000000;
  *(_DWORD *)(v4 + 84) = 0x80000000;
  *(_DWORD *)(v4 + 92) = 0x80000000;
  *(_QWORD *)(v4 + 96) = 0LL;
  v6 = CBitmapSource::Initialize((CBitmapSource *)v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = v6;
    v10 = 111;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v10);
    CBaseObject::Release(v5);
    return v7;
  }
  v7 = CBitmapSource::Update(v5, a1);
  v8 = v7;
  if ( (v7 & 0x80000000) != 0 )
  {
    v10 = 113;
    goto LABEL_8;
  }
  *a2 = v5;
  return v7;
}
