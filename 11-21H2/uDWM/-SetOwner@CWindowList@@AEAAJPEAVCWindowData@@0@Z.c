/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180023CF0
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18001F274 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001F920 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001F97C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030AC4 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowList *this, struct CWindowData *a2, struct CWindowData *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  struct CWindowData *v6; // rax
  unsigned int v9; // r9d
  __int64 v10; // rdx
  struct CWindowData *v11; // r8
  int v12; // eax
  int v13; // r9d
  unsigned int v14; // eax
  struct CWindowData *v15; // rdx
  _QWORD *v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // r8d
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CWindowData *v23; // [rsp+58h] [rbp+28h] BYREF
  struct CWindowData **v24; // [rsp+60h] [rbp+30h] BYREF

  v23 = a2;
  v3 = *((_QWORD *)a2 + 75);
  v4 = 0;
  v6 = a2;
  if ( (struct CWindowData *)v3 == a3 )
    return v4;
  if ( v3 )
  {
    CWindowData::UpdateOwnerLists(a2, 0);
    v6 = v23;
  }
  *((_QWORD *)v6 + 75) = 0LL;
  if ( v3 )
  {
    DynArray<CWindowData *,0>::Remove((__int64 *)(v3 + 608), &v23);
    v9 = *(_DWORD *)(v3 + 520);
    v10 = 0LL;
    if ( v9 )
    {
      v11 = v23;
      while ( *(struct CWindowData **)(*(_QWORD *)(*(_QWORD *)(v3 + 496) + 8 * v10) + 64LL) != v23 )
      {
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= v9 )
          goto LABEL_19;
      }
      v12 = CWindowData::NotifyRepresentationChanged((CWindowData *)v3);
      v4 = v12;
      if ( v12 < 0 )
      {
        v21 = 4353;
LABEL_14:
        v13 = v12;
LABEL_17:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v21);
        return v4;
      }
    }
  }
  v11 = v23;
LABEL_19:
  *((_QWORD *)v11 + 75) = a3;
  if ( a3 )
  {
    v15 = v23;
    if ( a3 == v23 )
      goto LABEL_29;
    v16 = (_QWORD *)((char *)a3 + 608);
    v17 = *((_DWORD *)a3 + 158);
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
      v4 = -2147024362;
      v14 = 181;
      goto LABEL_16;
    }
    if ( v18 > *((_DWORD *)a3 + 157) )
    {
      v24 = &v23;
      v4 = DynArrayImpl<0>::Grow((int)a3 + 608, 8, 1, 0, (__int64)&v24);
      if ( (v4 & 0x80000000) != 0 )
      {
        v14 = 192;
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v14);
        v13 = v4;
        v21 = 4366;
        goto LABEL_17;
      }
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)a3 + 158))++) + *v16) = *v24;
    }
    else
    {
      *(_QWORD *)(*v16 + 8LL * *((unsigned int *)a3 + 158)) = v23;
      *((_DWORD *)a3 + 158) = v18;
    }
    CWindowData::CheckOwnedWindowEligibility(v23);
    v12 = CWindowData::NotifyRepresentationChanged(a3);
    v4 = v12;
    if ( v12 < 0 )
    {
      v21 = 4371;
      goto LABEL_14;
    }
  }
  v15 = v23;
LABEL_29:
  v19 = CWindowList::ReevaluateAutoParenting(this, v15, 0);
  v20 = v19;
  if ( v19 >= 0 )
    return v4;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1116,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v19);
  return v20;
}
