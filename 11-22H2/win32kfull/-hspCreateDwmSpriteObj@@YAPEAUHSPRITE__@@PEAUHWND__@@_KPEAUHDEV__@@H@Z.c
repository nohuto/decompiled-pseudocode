/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007CA2C
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C00597AC (GreTransferSpriteStateToDwmState.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00CD42C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C007B35C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007C700 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C007C7E0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007CCDC (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C007E7B4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00A71EC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00C8A3C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00D5418 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C02651D4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

__int64 __fastcall hspCreateDwmSpriteObj(Gre::Base *a1, __int64 a2, HDEV a3, int a4)
{
  int v4; // r12d
  __int64 v7; // rbx
  struct Gre::Base::SESSION_GLOBALS *v8; // r15
  __int64 Object; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  HSPRITE v15; // rcx
  HSPRITE NeighborSprite; // r12
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  struct _RTL_GENERIC_TABLE *v24; // rcx
  HLSURF LogicalSurfaceObject; // rsi
  HDEV v26; // rdx
  HDEV v27; // rdx
  unsigned __int8 NewElement[8]; // [rsp+28h] [rbp-89h] BYREF
  _QWORD Buffer[2]; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v31[32]; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-51h]
  Gre::Base *v33; // [rsp+68h] [rbp-49h] BYREF
  __int128 v34; // [rsp+70h] [rbp-41h]
  _BYTE v35[32]; // [rsp+80h] [rbp-31h] BYREF
  struct SFMLOGICALSURFACE *v36; // [rsp+A0h] [rbp-11h]
  int v37; // [rsp+A8h] [rbp-9h]
  _BYTE v38[32]; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+1Fh]

  v4 = a4;
  v34 = 0LL;
  v7 = 0LL;
  v8 = Gre::Base::Globals(a1);
  Object = AllocateObject(152LL, 15LL, 1LL);
  v10 = (_QWORD *)Object;
  if ( !Object )
    return v7;
  v11 = (_QWORD *)(Object + 24);
  NewElement[0] = 0;
  *(_QWORD *)(Object + 32) = Object + 24;
  *(_QWORD *)(Object + 24) = Object + 24;
  ++*(_DWORD *)(*((_QWORD *)v8 + 38) + 96LL);
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v38);
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v38, (struct OBJECT *)v10, 0xFu, 8u) )
    goto LABEL_21;
  v13 = *v10;
  LOBYTE(v12) = 15;
  NewElement[0] = 1;
  HmgMarkUndeletable(v13, v12);
  v14 = *((_QWORD *)v8 + 38);
  v15 = *(HSPRITE *)(v14 + 144);
  if ( !v15 )
  {
    v21 = *(_QWORD **)(v14 + 88);
    v22 = v14 + 80;
    if ( *v21 == v22 )
    {
      *v11 = v22;
      v11[1] = v21;
      *v21 = v11;
      *(_QWORD *)(v22 + 8) = v11;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  NeighborSprite = hspGetNeighborSprite(v15, 0, 0);
  if ( NeighborSprite )
  {
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v31);
    v32 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v31, NeighborSprite);
    v17 = (__int64 *)((v32 + 24) & ((unsigned __int128)-(__int128)v32 >> 64));
    v18 = *v17;
    if ( *(__int64 **)(*v17 + 8) == v17 )
    {
      *v11 = v18;
      v11[1] = v17;
      *(_QWORD *)(v18 + 8) = v11;
      *v17 = (__int64)v11;
      if ( v32 )
        _InterlockedDecrement((volatile signed __int32 *)(v32 + 12));
      v32 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v31);
      goto LABEL_11;
    }
LABEL_13:
    __fastfail(3u);
  }
  v19 = *((_QWORD *)v8 + 38) + 80LL;
  v20 = *(_QWORD *)v19;
  if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
    goto LABEL_13;
  *v11 = v20;
  v11[1] = v19;
  *(_QWORD *)(v20 + 8) = v11;
  *(_QWORD *)v19 = v11;
LABEL_11:
  v4 = a4;
LABEL_15:
  if ( a1 )
  {
    v23 = *v10;
    v10[5] = a1;
    v24 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)v8 + 38);
    Buffer[1] = v23;
    Buffer[0] = a1;
    RtlInsertElementGenericTable(v24, Buffer, 0x10u, NewElement);
  }
  if ( !NewElement[0] )
    goto LABEL_22;
  EtwDwmSpriteCreateEvent(a1, *v10);
  v33 = a1;
  LogicalSurfaceObject = hlsurfCreateLogicalSurfaceObject(
                           a3,
                           (unsigned int)(v4 != 0) + 4,
                           (struct _CD_HLSURF_CREATIONCONTEXT *)&v33);
  if ( LogicalSurfaceObject )
  {
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v35);
    v36 = 0LL;
    v37 = 0;
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v35, LogicalSurfaceObject);
    DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v10, v26, v36);
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v35);
  }
  else
  {
    NewElement[0] = 0;
  }
LABEL_21:
  if ( !NewElement[0] )
LABEL_22:
    _InterlockedIncrement((volatile signed __int32 *)v10 + 3);
  if ( v39 )
    _InterlockedDecrement((volatile signed __int32 *)(v39 + 12));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v38);
  if ( NewElement[0] )
  {
    GreInitializePushLock(v10 + 11);
    v7 = *v10;
    v10[6] = a2;
  }
  else
  {
    LOBYTE(v27) = 1;
    vspDestroyDwmSpriteObjInternal(a3, v27, (struct DWMSPRITE *)v10);
  }
  return v7;
}
