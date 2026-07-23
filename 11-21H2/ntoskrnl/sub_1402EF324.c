/*
 * XREFs of sub_1402EF324 @ 0x1402EF324
 * Callers:
 *     sub_1402F1298 @ 0x1402F1298 (sub_1402F1298.c)
 *     sub_1402F349C @ 0x1402F349C (sub_1402F349C.c)
 *     sub_1403547BC @ 0x1403547BC (sub_1403547BC.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 */

__int64 sub_1402EF324()
{
  __int64 v0; // rax
  int v1; // edi
  void *v2; // rbx
  void *v4; // rdi
  PVOID TokenInformation; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+70h] [rbp+28h] BYREF
  int v7; // [rsp+78h] [rbp+30h] BYREF
  int v8; // [rsp+80h] [rbp+38h] BYREF
  PVOID v9; // [rsp+88h] [rbp+40h] BYREF

  LODWORD(v9) = 0;
  v7 = 0;
  v8 = 0;
  v6 = 0;
  v0 = sub_1407B3B60(KeGetCurrentThread(), 1836020801LL, &v7, &v6, &v8, 0LL);
  v1 = v7;
  v2 = (void *)v0;
  if ( v7 == 2 && v8 < 2 )
  {
    v4 = (void *)sub_140347920(*((_QWORD *)KeGetCurrentThread() + 23), 1836020801LL);
    SeQueryInformationToken(v4, TokenIsAppContainer, &v9);
    if ( (_DWORD)v9 == 1 )
    {
      if ( v2 )
        ObfDereferenceObjectWithTag(v2, 0x6D6F7441u);
      v2 = v4;
      v1 = 1;
    }
    else
    {
      ObfDereferenceObjectWithTag(v4, 0x6D6F7441u);
      v1 = v7;
    }
  }
  LODWORD(TokenInformation) = 0;
  SeQueryInformationToken(v2, TokenAppContainerNumber, &TokenInformation);
  if ( v1 == 1 )
  {
    sub_1402F89B0(*((_QWORD *)KeGetCurrentThread() + 23) + 1208LL, v2, 1836020801LL);
  }
  else if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x6D6F7441u);
  }
  return (unsigned int)TokenInformation;
}
