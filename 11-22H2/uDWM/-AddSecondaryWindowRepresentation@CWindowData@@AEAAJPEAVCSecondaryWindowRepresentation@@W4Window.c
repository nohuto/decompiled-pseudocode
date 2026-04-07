/*
 * XREFs of ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001CF40
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001D008 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800138C8 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D634 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18003730C (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x1801067E8 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 */

__int64 __fastcall CWindowData::AddSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        int a3,
        char a4)
{
  unsigned int v4; // ebx
  CSecondaryWindowRepresentation *v6; // r11
  int v8; // esi
  char v9; // al
  int v11; // esi
  __int64 v12; // rsi
  struct CWindowData *v13; // rdx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // ebp
  __int64 v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-18h]
  CSecondaryWindowRepresentation *v21; // [rsp+48h] [rbp+10h] BYREF

  v21 = a2;
  v4 = 0;
  v6 = a2;
  if ( a4 )
  {
    v15 = *(_DWORD *)(a1 + 520);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v4 = -2147024362;
      v17 = 181;
      v18 = -2147024362;
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v17, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x333u, 0LL);
      return v4;
    }
    v18 = 0;
    if ( v16 > *(_DWORD *)(a1 + 516) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 496, 8LL, 1LL, &v21);
      v4 = v18;
      if ( v18 < 0 )
      {
        v17 = 192;
        goto LABEL_22;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 496) + 8LL * *(unsigned int *)(a1 + 520)) = v6;
      *(_DWORD *)(a1 + 520) = v16;
    }
    v6 = v21;
    v4 = v18;
  }
  v8 = a3 - 1;
  if ( !v8 )
  {
    if ( ++*(_DWORD *)(a1 + 528) == 1 )
    {
      v9 = *(_BYTE *)(a1 + 673);
      if ( v9 >= 0 )
      {
        *(_BYTE *)(a1 + 673) = v9 | 0x80;
        CWindowData::CheckOwnedWindowEligibilityForOwner((CWindowData *)a1);
      }
      return v4;
    }
    v12 = 0LL;
    if ( !*(_DWORD *)(a1 + 632) )
      return v4;
    while ( 1 )
    {
      v13 = *(struct CWindowData **)(*(_QWORD *)(a1 + 608) + 8 * v12);
      if ( (*((_BYTE *)v13 + 674) & 1) != 0 )
      {
        v14 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v6, v13, 1);
        v4 = v14;
        if ( v14 < 0 )
        {
          v20 = 839;
LABEL_31:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v20, 0LL);
          return v4;
        }
        v6 = v21;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 632) )
        return v4;
    }
  }
  v11 = v8 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
      {
        v19 = *(_QWORD *)(a1 + 488);
        if ( v19 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        }
        else
        {
          v14 = CWindowIconic::Create((struct CWindowData *)a1, (struct CWindowIconic **)(a1 + 488), 0);
          v4 = v14;
          if ( v14 < 0 )
          {
            v20 = 851;
            goto LABEL_31;
          }
        }
      }
    }
    else
    {
      v4 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x362u, 0LL);
    }
  }
  return v4;
}
