/*
 * XREFs of AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14022CDC0
 * Callers:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14022CC80 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022CF3C (RtlULongLongMult.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14022D1D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x140346A74 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 */

__int64 __fastcall AuthzBasepGetSecurityAttributesCopyoutBufferSize(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        ULONGLONG *a4)
{
  __int64 v8; // r8
  ULONGLONG v9; // rbx
  unsigned int v10; // edi
  __int64 SecurityAttribute; // rax
  __int64 v12; // r8
  NTSTATUS v14; // eax
  unsigned int *v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int SecurityAttributeValueCopyoutBufferSize; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  ULONGLONG pullResult; // [rsp+58h] [rbp+38h] BYREF

  pullResult = 0LL;
  if ( !a2 )
  {
    v14 = RtlULongLongMult(0x28uLL, *a1, &pullResult);
    v8 = (unsigned int)v14;
    if ( v14 < 0 )
      return (unsigned int)v8;
    v9 = pullResult + 16;
    if ( pullResult < 0xFFFFFFFFFFFFFFF0uLL )
    {
      v15 = (unsigned int *)*((_QWORD *)a1 + 1);
      while ( v15 != a1 + 2 )
      {
        v16 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v16 < v9 )
          goto LABEL_21;
        v17 = *((unsigned __int16 *)v15 + 16);
        if ( v17 + v16 < v16 )
          goto LABEL_21;
        pullResult = v17 + v16;
        SecurityAttributeValueCopyoutBufferSize = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(
                                                    v15,
                                                    &pullResult,
                                                    v8);
        v8 = (unsigned int)SecurityAttributeValueCopyoutBufferSize;
        if ( SecurityAttributeValueCopyoutBufferSize < 0 )
          return (unsigned int)v8;
        v15 = *(unsigned int **)v15;
        v9 = pullResult;
      }
      goto LABEL_20;
    }
LABEL_21:
    LODWORD(v8) = -1073741675;
    return (unsigned int)v8;
  }
  LODWORD(v8) = RtlULongLongMult(0x28uLL, a3, &pullResult);
  if ( (int)v8 < 0 )
    return (unsigned int)v8;
  v9 = pullResult + 16;
  if ( pullResult >= 0xFFFFFFFFFFFFFFF0uLL )
    goto LABEL_21;
  v10 = 0;
  if ( !a3 )
  {
LABEL_20:
    *a4 = v9;
    return (unsigned int)v8;
  }
  while ( 1 )
  {
    SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, a2 + 16LL * v10);
    v12 = SecurityAttribute;
    if ( !SecurityAttribute )
      break;
    v19 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v19 < v9 )
      goto LABEL_21;
    v20 = *(unsigned __int16 *)(SecurityAttribute + 32);
    if ( v20 + v19 < v19 )
      goto LABEL_21;
    pullResult = v19 + v20;
    LODWORD(v8) = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v12, &pullResult, v12);
    if ( (int)v8 < 0 )
      return (unsigned int)v8;
    v9 = pullResult;
    if ( ++v10 >= a3 )
      goto LABEL_20;
  }
  LODWORD(v8) = -1073741275;
  return (unsigned int)v8;
}
