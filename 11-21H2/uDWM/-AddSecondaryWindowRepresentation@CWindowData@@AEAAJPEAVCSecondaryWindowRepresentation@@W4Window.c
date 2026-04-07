/*
 * XREFs of ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180020F18
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180020E74 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18001F2E4 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800485B8 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18004A6C4 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
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
  int v9; // esi
  char v11; // al
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // r9d
  __int64 v18; // rsi
  struct CWindowData *v19; // rdx
  unsigned int v20; // [rsp+20h] [rbp-18h]
  CSecondaryWindowRepresentation *v21; // [rsp+48h] [rbp+10h] BYREF

  v21 = a2;
  v4 = 0;
  v6 = a2;
  if ( !a4 )
    goto LABEL_2;
  v14 = *(_DWORD *)(a1 + 520);
  v15 = v14 + 1;
  if ( v14 + 1 < v14 )
  {
    v4 = -2147024362;
    v16 = 181;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v16);
    v20 = 8455;
    goto LABEL_23;
  }
  if ( v15 > *(_DWORD *)(a1 + 516) )
  {
    v4 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 496, 8LL, 1LL, &v21);
    if ( (v4 & 0x80000000) != 0 )
    {
      v16 = 192;
      goto LABEL_21;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 496) + 8LL * *(unsigned int *)(a1 + 520)) = v6;
    *(_DWORD *)(a1 + 520) = v15;
  }
  v6 = v21;
LABEL_2:
  v8 = a3 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
      return v4;
    if ( v9 == 1 )
    {
      if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
      {
        v12 = *(_QWORD *)(a1 + 488);
        if ( v12 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        }
        else
        {
          v13 = CWindowIconic::Create((struct CWindowData *)a1, (struct CWindowIconic **)(a1 + 488), 0);
          v4 = v13;
          if ( v13 < 0 )
          {
            v20 = 8487;
            goto LABEL_31;
          }
        }
      }
      return v4;
    }
    v4 = -2147418113;
    v20 = 8502;
LABEL_23:
    v17 = v4;
    goto LABEL_32;
  }
  if ( ++*(_DWORD *)(a1 + 528) == 1 )
  {
    v11 = *(_BYTE *)(a1 + 665);
    if ( v11 >= 0 )
    {
      *(_BYTE *)(a1 + 665) = v11 | 0x80;
      CWindowData::CheckOwnedWindowEligibilityForOwner((CWindowData *)a1);
    }
    return v4;
  }
  v18 = 0LL;
  if ( !*(_DWORD *)(a1 + 632) )
    return v4;
  while ( 1 )
  {
    v19 = *(struct CWindowData **)(*(_QWORD *)(a1 + 608) + 8 * v18);
    if ( (*((_BYTE *)v19 + 666) & 1) != 0 )
      break;
LABEL_28:
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= *(_DWORD *)(a1 + 632) )
      return v4;
  }
  v13 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v6, v19, 1);
  v4 = v13;
  if ( v13 >= 0 )
  {
    v6 = v21;
    goto LABEL_28;
  }
  v20 = 8475;
LABEL_31:
  v17 = v13;
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, v20);
  return v4;
}
