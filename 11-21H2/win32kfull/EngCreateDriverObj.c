/*
 * XREFs of EngCreateDriverObj @ 0x1C0282C50
 * Callers:
 *     VerifierEngCreateDriverObj @ 0x1C029CD70 (VerifierEngCreateDriverObj.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0022858 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026B168 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  struct HOBJ__ *v3; // rdi
  struct OBJECT *Object; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct OBJECT *v10; // rbx
  _BYTE v12[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]
  HDEV v14; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  Object = (struct OBJECT *)AllocateObject(64LL, 28LL);
  v10 = Object;
  if ( Object )
  {
    v14 = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 221);
    *((_QWORD *)Object + 7) = PsGetCurrentProcess(v9, v8);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v12);
    v3 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v12, v10, 0x1Cu, 0);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v14);
    else
      FreeObject(v10, 28LL);
    if ( v13 )
      _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v12);
  }
  return (HDRVOBJ)v3;
}
