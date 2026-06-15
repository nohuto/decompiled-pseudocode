/*
 * XREFs of ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18005A260
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001C7F0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CA18 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_S_guid_D @ 0x18011F908 (WPP_SF_S_guid_D.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::OnPropertyValueChanged(CMonitorManager *this, char *a2, struct _tagpropertykey *a3)
{
  unsigned __int64 i; // rcx
  __int64 v7; // rdx
  __int64 v9; // rax
  void **v10; // rax
  void **v11; // r14
  __int64 v12; // rax

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_D(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, (_DWORD)a3, (_DWORD)a2, (__int64)a3, a3->pid);
  }
  for ( i = 0LL; i < 0x50; i += 16LL )
  {
    v7 = *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + i);
    if ( a3->pid == *(_DWORD *)(v7 + 16) )
    {
      v9 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v7 )
        v9 = *(_QWORD *)a3->fmtid.Data4 - *(_QWORD *)(v7 + 8);
      if ( !v9 )
      {
        v10 = (void **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v11 = v10;
        if ( v10 )
        {
          ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v10, (__int64)&ATL::g_strmgr);
          v11[4] = this;
          if ( this )
            (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
          v11[5] = 0LL;
        }
        else
        {
          v11 = 0LL;
        }
        if ( v11 )
        {
          if ( a2 )
          {
            v12 = -1LL;
            do
              ++v12;
            while ( *(_WORD *)&a2[2 * v12] );
          }
          else
          {
            LODWORD(v12) = 0;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetString(v11, a2, v12);
          JUMPOUT(0x1800BC318LL);
        }
        JUMPOUT(0x1800BC3B8LL);
      }
    }
  }
  return 0LL;
}
