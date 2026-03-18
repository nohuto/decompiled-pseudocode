/*
 * XREFs of ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C007BBEC
 * Callers:
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C0075220 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1C0074EF4 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x1C0079450 (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007A178 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007B978 (-CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPr.c)
 *     ?IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z @ 0x1C007BD58 (-IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C007C0E8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall FlipManagerCreateProducerTokenInitInfo(
        void *a1,
        bool a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct FlipPropertyItem *Src,
        struct FlipManagerTokenInitInfo *a6)
{
  FlipManagerObject *v6; // rbx
  int v10; // esi
  char v11; // r8
  int v12; // eax
  int v13; // eax
  struct CFlipPresentUpdate *v14; // rdi
  PVOID v15; // rax
  _QWORD *v16; // rcx
  bool v18; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  CFlipPropertySetBase *v20; // [rsp+40h] [rbp-20h] BYREF
  struct CFlipPresentUpdate *v21; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object; // [rsp+50h] [rbp-10h] BYREF

  v6 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  P = 0LL;
  Object = 0LL;
  v18 = 0;
  v10 = CreateFlipPropertySetWorker<CFlipPropertySet>(a4, (char *)Src, a3, &v20);
  if ( v10 >= 0 )
  {
    v12 = FlipManagerObject::ResolveHandle(a1, 2u, v11, (struct FlipManagerObject **)&Object);
    v6 = (FlipManagerObject *)Object;
    v10 = v12;
    if ( v12 >= 0 )
    {
      FlipManagerObject::IsDwmBound((FlipManagerObject *)Object, &v18);
      v13 = FlipManagerObject::CreatePresentUpdateForProducer(
              v6,
              a2,
              a3,
              v20,
              &v21,
              (struct FlipManagerTokenIFlipInfo **)&P);
      v14 = v21;
      v10 = v13;
      if ( v13 < 0
        || (*((_QWORD *)a6 + 3) = *((_QWORD *)v21 + 8),
            v10 = ObReferenceObjectByPointer(v6, 3u, g_pDxgkCompositionObjectType, 0),
            v10 < 0) )
      {
        v16 = P;
      }
      else
      {
        *((_BYTE *)a6 + 16) = v18;
        v15 = P;
        *((_QWORD *)a6 + 1) = v6;
        *((_QWORD *)a6 + 4) = a3;
        *((_QWORD *)v14 + 1) = v6;
        v6 = 0LL;
        *(_QWORD *)a6 = v14;
        v14 = 0LL;
        v16 = 0LL;
        *((_QWORD *)a6 + 5) = v15;
      }
      if ( v16 )
        FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v16);
      if ( v14 )
        (*(void (__fastcall **)(struct CFlipPresentUpdate *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  if ( v20 )
    CFlipPropertySetBase::Release(v20);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v10;
}
