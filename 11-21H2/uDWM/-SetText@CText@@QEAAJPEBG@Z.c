/*
 * XREFs of ?SetText@CText@@QEAAJPEBG@Z @ 0x180046464
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180046308 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x1800E66D4 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800465A8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::SetText(CText *this, const unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  const unsigned __int16 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int16 *v9; // rax
  int v10; // eax
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v2 = 0;
  (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  v5 = *((_QWORD *)this + 37);
  *((_BYTE *)this + 288) &= ~1u;
  if ( v5 )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 37) = 0LL;
  }
  if ( a2 )
  {
    v6 = a2;
    v7 = 0x7FFFFFFFLL;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v7;
    }
    while ( v7 );
    v2 = v7 == 0 ? 0x80070057 : 0;
    v8 = (0x7FFFFFFF - v7) & -(__int64)(v7 != 0);
    if ( !v7 )
    {
      v13 = 113;
      goto LABEL_14;
    }
    if ( v8 )
    {
      v9 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                 WPF::g_pProcessHeap,
                                 2 * v8 + 2);
      *((_QWORD *)this + 37) = v9;
      if ( v9 )
      {
        v10 = StringCchCopyW(v9, v8 + 1, a2);
        v2 = v10;
        if ( v10 >= 0 )
          return v2;
        v12 = v10;
        v13 = 123;
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v13);
        return v2;
      }
      v2 = -2147024882;
      v13 = 121;
LABEL_14:
      v12 = v2;
      goto LABEL_16;
    }
  }
  return v2;
}
