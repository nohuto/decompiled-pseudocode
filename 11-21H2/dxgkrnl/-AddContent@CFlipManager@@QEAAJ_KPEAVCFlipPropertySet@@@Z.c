/*
 * XREFs of ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C007C3EC
 * Callers:
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C0079AA0 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C007F9EC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C0081124 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 */

__int64 __fastcall CFlipManager::AddContent(CFlipManager *this, unsigned __int64 a2, struct CFlipPropertySet *a3)
{
  char *v3; // rsi
  struct CFlipPropertySet *v6; // r11
  unsigned int v7; // edi
  int v8; // eax
  struct CContentResourceState *v9; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  char **v13; // rax
  char *v14; // rbx
  struct CContentResourceState *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  v3 = (char *)this + 72;
  if ( CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 72)) )
    return (unsigned int)-1073741811;
  v8 = CContentResource::Create(a2, v6, &v16);
  v9 = v16;
  v7 = v8;
  if ( v8 >= 0 )
  {
    if ( !*(_QWORD *)(*((_QWORD *)v16 + 3) + 48LL) )
    {
LABEL_7:
      v13 = (char **)*((_QWORD *)v3 + 1);
      v14 = (char *)v9 + 8;
      if ( *v13 != v3 )
        __fastfail(3u);
      *(_QWORD *)v14 = v3;
      *((_QWORD *)v14 + 1) = v13;
      *v13 = v14;
      *((_QWORD *)v3 + 1) = v14;
      v9 = 0LL;
      goto LABEL_12;
    }
    Global = DXGGLOBAL_GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(*((_QWORD *)Global + 38073) + 248LL))(
      *((unsigned int *)this + 82),
      *((_QWORD *)v9 + 3),
      a2);
    v12 = *((_QWORD *)this + 6);
    if ( !v12 )
    {
      *((_QWORD *)this + 6) = 1LL;
      *((_QWORD *)this + 3) = ExAllocatePool2(257LL, 22536LL, 1752187718LL, v11);
      goto LABEL_7;
    }
    if ( v12 == 1 )
      goto LABEL_7;
    v7 = -1073741790;
  }
LABEL_12:
  if ( v9 )
    (*(void (__fastcall **)(struct CContentResourceState *, __int64))(*(_QWORD *)v9 + 32LL))(v9, 1LL);
  return v7;
}
