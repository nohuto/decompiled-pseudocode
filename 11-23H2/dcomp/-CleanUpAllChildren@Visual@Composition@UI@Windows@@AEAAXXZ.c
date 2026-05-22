/*
 * XREFs of ?CleanUpAllChildren@Visual@Composition@UI@Windows@@AEAAXXZ @ 0x18002885C
 * Callers:
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001E154 (-EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18006A86C (-RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x180108A7C (-EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::Visual::CleanUpAllChildren(Windows::UI::Composition::Visual *this)
{
  __int64 v2; // rdi
  int v3; // r10d
  __int64 v4; // rdx
  CSparseStorage::AllocatedStorage *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  while ( 1 )
  {
    v2 = *((_QWORD *)this + 18);
    if ( !v2 )
      break;
    if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 16)) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    v3 = *(_DWORD *)(v2 + 260);
    if ( (v3 & 0x10000) != 0 || (*((_DWORD *)this + 65) & 0x1000) != 0 )
    {
      Windows::UI::Composition::Visual::RemoveChild(this, (struct Windows::UI::Composition::Visual *)v2);
    }
    else if ( (v3 & 0x20000) != 0
           && ((v5 = *(CSparseStorage::AllocatedStorage **)(v2 + 112), (*((_DWORD *)v5 + 1) & 0x8000) == 0)
             ? (v6 = 0LL)
             : (v6 = *(_QWORD *)((char *)CSparseStorage::AllocatedStorage::FindSlot(v5, 0x11u) + 4)),
               v6) )
    {
      if ( (v3 & 0x40000) != 0 )
      {
        v7 = *(_QWORD *)(v2 + 24);
        ++*(_DWORD *)(v7 + 88);
        if ( *(_DWORD *)(v7 + 80) != *(_DWORD *)(v7 + 84) + *(_DWORD *)(v7 + 88) )
          Microsoft::WRL2::FailFast::Unexpected("Begin callout counts");
        Microsoft::WRL2::ContextSession::EnsureMessageExtensions((Microsoft::WRL2::ContextSession *)v7);
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 128) + 96LL))(*(_QWORD *)(v7 + 128));
        if ( v8 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x711,
            (unsigned int)"onecore\\private\\sdk\\inc\\wrl2\\Wrl2Agile.cpp",
            (const char *)(unsigned int)v8,
            v9);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
        Microsoft::WRL2::ContextSession::EndPrivateCallout((Microsoft::WRL2::ContextSession *)v7);
      }
      else
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
      }
    }
    else
    {
      Microsoft::WRL2::ContextRuntimeClass::Dispose((Microsoft::WRL2::ContextRuntimeClass *)v2);
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 16), 0xFFFFFFFF) == 1 )
    {
      LOBYTE(v4) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, v4);
    }
  }
}
