/*
 * XREFs of ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1802770B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180015728 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x18009EA44 (--0CExpressionValue@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180216E8C (--1CExpressionValue@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapater::Update(
        CNaturalAnimationScalarForceAdapater *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  _QWORD *v5; // rcx
  float v7; // xmm6_4
  int v8; // eax
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  float *v13; // rbx
  __int64 v14; // rax
  CExpressionValue *v15; // rax
  float *v16; // rbx
  _BYTE v18[96]; // [rsp+30h] [rbp-68h] BYREF
  const void *retaddr; // [rsp+98h] [rbp+0h]
  char v20; // [rsp+A0h] [rbp+8h] BYREF

  v5 = (_QWORD *)*((_QWORD *)this + 4);
  v7 = 0.0;
  if ( v5 )
    v5 = (_QWORD *)v5[2];
  v8 = (*(__int64 (__fastcall **)(_QWORD *, struct CExpressionValueStack *, __int64, char *))(*v5 + 256LL))(
         v5,
         a3,
         a4,
         &v20);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT(v8, retaddr);
  if ( v8 != 1 )
  {
    v9 = *((_QWORD *)this + 4);
    if ( v9 )
      v9 = *(_QWORD *)(v9 + 16);
    v10 = *(_DWORD *)(v9 + 152);
    if ( v10 == 18 )
    {
      v14 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
      if ( (unsigned int)v14 < *((_DWORD *)a3 + 12) )
      {
        v16 = (float *)(*((_QWORD *)a3 + 3) + 80 * v14);
      }
      else
      {
        v15 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
        v16 = (float *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v15);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
      }
      v7 = *v16;
    }
    else
    {
      if ( v10 != 35 )
        ModuleFailFastForHRESULT(-2147467259, retaddr);
      v11 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
      if ( (unsigned int)v11 < *((_DWORD *)a3 + 12) )
      {
        v13 = (float *)(*((_QWORD *)a3 + 3) + 80 * v11);
      }
      else
      {
        v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
        v13 = (float *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
      }
      v7 = *v13;
      if ( *((_DWORD *)this + 4) )
        v7 = v13[1];
    }
    --*((_DWORD *)a3 + 4);
  }
  return v7;
}
