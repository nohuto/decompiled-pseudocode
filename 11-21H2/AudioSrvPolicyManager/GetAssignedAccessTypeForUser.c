/*
 * XREFs of GetAssignedAccessTypeForUser @ 0x180041D88
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     GetAssignedAccessTypeForUser_0 @ 0x180041DB4 (GetAssignedAccessTypeForUser_0.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser(unsigned __int16 *a1, char a2)
{
  int AssignedAccessTypeForUser_0; // eax
  unsigned int v3; // ecx
  unsigned int v5; // [rsp+38h] [rbp+10h]

  LOBYTE(v5) = a2;
  AssignedAccessTypeForUser_0 = GetAssignedAccessTypeForUser_0(a1);
  v3 = 0;
  if ( AssignedAccessTypeForUser_0 >= 0 )
    return v5;
  return v3;
}
