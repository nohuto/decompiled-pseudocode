/*
 * XREFs of ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x180130CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@@@QEAAJ_K0@Z @ 0x1800EDF7C (-_EnsureCapacity@-$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@.c)
 *     ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x1801307E8 (--_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z.c)
 *     ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x1801310E0 (-Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::RegisterForDesktopVisibilityChanges(
        _QWORD *a1,
        unsigned int a2,
        struct IUnknown *a3,
        unsigned int *a4)
{
  unsigned int *v8; // rax
  unsigned int *v9; // rbx
  int v10; // edi
  void *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int **v14; // rdx

  *a4 = 0;
  v8 = (unsigned int *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 0;
    v8[1] = a2;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = GlobalInterfaceTable::Marshal(a3, &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84, v9);
    if ( v10 >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v10 = 0;
      v12 = a1[33];
      if ( v12 != a1[35]
        || (v10 = CTSimpleArray<CImmersiveMode::DesktopVisibilityChangeListener *,4294967294,CTPolicyLocalMem<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::DesktopVisibilityChangeListener *>>::_EnsureCapacity(
                    (__int64)(a1 + 32),
                    v12 + 1,
                    v11),
            v10 >= 0) )
      {
        v13 = a1[33];
        a1[33] = v13 + 1;
        v14 = (unsigned int **)(a1[32] + 8 * v13);
        if ( v14 )
          *v14 = v9;
      }
      if ( v10 >= 0 )
      {
        *a4 = *v9;
        v9 = 0LL;
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    }
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v9 )
    CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'((CImmersiveMode::DesktopVisibilityChangeListener *)v9);
  return (unsigned int)v10;
}
