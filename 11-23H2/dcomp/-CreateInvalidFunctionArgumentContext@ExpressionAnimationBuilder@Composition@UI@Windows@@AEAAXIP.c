/*
 * XREFs of ?CreateInvalidFunctionArgumentContext@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXIPEAGI@Z @ 0x1801628E8
 * Callers:
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800691F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     GetExpressionTypeAsString @ 0x180162AFC (GetExpressionTypeAsString.c)
 *     ?StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180163540 (-StringCchCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     StringCopyWorkerW_1 @ 0x180163614 (StringCopyWorkerW_1.c)
 */

void __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::CreateInvalidFunctionArgumentContext(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        int a2,
        unsigned __int16 *a3)
{
  int v6; // r8d
  int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rsi
  __int64 ExpressionTypeAsString; // rax
  HRESULT v12; // eax
  size_t v13; // rbx
  unsigned __int16 *v14; // r10
  unsigned int v15; // edi
  const unsigned __int16 **v16; // r14
  int v17; // eax
  int v18; // eax
  int v19; // eax
  HRESULT v20; // eax
  unsigned __int64 *v21; // [rsp+28h] [rbp-69h]
  unsigned int v22; // [rsp+30h] [rbp-61h]
  size_t pcchNewDestLength; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v25[16]; // [rsp+48h] [rbp-49h] BYREF
  const void *retaddr; // [rsp+F0h] [rbp+5Fh]

  memset_0(v25, 0, sizeof(v25));
  v6 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    v7 = v6 - a2;
    v8 = 0LL;
    if ( v7 > 0 )
      v8 = (unsigned int)v7;
    v9 = 0;
    if ( v6 - 1 > 0 )
      v9 = v6 - 1;
    v10 = 0LL;
    while ( (unsigned int)v8 <= v9 )
    {
      ExpressionTypeAsString = GetExpressionTypeAsString(*((unsigned int *)this + v8 + 66));
      v8 = (unsigned int)(v8 + 1);
      v25[v10] = ExpressionTypeAsString;
      v10 = (unsigned int)(v10 + 1);
    }
    pcchNewDestLength = 0LL;
    v12 = StringCopyWorkerW_1(a3, 0x64uLL, &pcchNewDestLength, L"<", (size_t)v21);
    v13 = 100 - pcchNewDestLength;
    v14 = &a3[pcchNewDestLength];
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2147024774
      || (pcchNewDestLength = (size_t)&a3[pcchNewDestLength], v24 = v13, v12 < 0) )
    {
      ModuleFailFastForHRESULT(v12, retaddr);
    }
    v15 = 0;
    if ( (_DWORD)v10 )
    {
      v16 = (const unsigned __int16 **)v25;
      do
      {
        v17 = StringCchCatExW(v14, v13, *v16, (unsigned __int16 **)&pcchNewDestLength, &v24, v22);
        if ( v17 < 0 )
          ModuleFailFastForHRESULT(v17, retaddr);
        if ( v15 < (int)v10 - 1 )
        {
          v18 = StringCchCatExW(
                  (unsigned __int16 *)pcchNewDestLength,
                  v24,
                  L",",
                  (unsigned __int16 **)&pcchNewDestLength,
                  &v24,
                  v22);
          if ( v18 < 0 )
            ModuleFailFastForHRESULT(v18, retaddr);
        }
        v13 = v24;
        ++v15;
        v14 = (unsigned __int16 *)pcchNewDestLength;
        ++v16;
      }
      while ( v15 < (unsigned int)v10 );
    }
    v19 = StringCchCatExW(v14, v13, L">", (unsigned __int16 **)&pcchNewDestLength, &v24, v22);
    if ( v19 < 0 )
      ModuleFailFastForHRESULT(v19, retaddr);
  }
  else
  {
    v20 = StringCchCopyW(a3, 0x64uLL, (size_t *)L"<>");
    if ( v20 < 0 )
      ModuleFailFastForHRESULT(v20, retaddr);
  }
}
