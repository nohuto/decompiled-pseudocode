/*
 * XREFs of sub_140825DCC @ 0x140825DCC
 * Callers:
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 *     sub_1409646B4 @ 0x1409646B4 (sub_1409646B4.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall sub_140825DCC(int **a1)
{
  ULONG i; // edi
  int *v3; // rax
  int *v4; // rbx
  NTSTATUS v5; // eax
  int v6; // ebp
  unsigned int v7; // edi
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  ReturnLength = 0;
  if ( !a1 )
    return 3221225485LL;
  for ( i = 304; ; i = 296 * v6 + 8 )
  {
    v3 = (int *)sub_1402D84BC(i);
    v4 = v3;
    if ( !v3 )
      break;
    v5 = ZwQuerySystemInformation(SystemModuleInformation, v3, i, &ReturnLength);
    v6 = *v4;
    v7 = v5;
    if ( v5 >= 0 )
    {
      *a1 = v4;
      return v7;
    }
    if ( v5 != -1073741820 )
    {
      sub_1402D8494(v4);
      return v7;
    }
    sub_1402D8494(v4);
  }
  return (unsigned int)-1073741670;
}
