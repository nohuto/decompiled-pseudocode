/*
 * XREFs of PortPassThroughExValidateNormalizedRequest @ 0x1C00B0874
 * Callers:
 *     PortPassThroughExValidate @ 0x1C00789BC (PortPassThroughExValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughExValidateNormalizedRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r9
  char v14; // r8
  bool v15; // zf
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  bool v19; // cc
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  char v22; // cl
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v15 = *(_BYTE *)(a1 + 56) == 72;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = *(unsigned int *)(v3 + 16);
  v7 = *(unsigned int *)(v3 + 8);
  if ( v15 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
      return 3221225659LL;
    ZwClose(KeyHandle);
  }
  v9 = *(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 24);
  v10 = *(unsigned __int8 *)(a1 + 17);
  if ( (_BYTE)v10 )
  {
    v11 = *(_DWORD *)(a1 + 28);
    if ( v11 < v9 )
      return 3221225485LL;
    v9 = v11 + v10;
    if ( v11 + v10 > (unsigned int)v6 || v9 > (unsigned int)v7 || v9 < v11 )
      return 3221225485LL;
  }
  v12 = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)v12 )
  {
    if ( !*(_QWORD *)(a1 + 40) )
      return 3221225485LL;
  }
  v13 = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)v13 )
  {
    if ( !*(_QWORD *)(a1 + 48) )
      return 3221225485LL;
  }
  v14 = *(_BYTE *)(a1 + 18);
  if ( v14 == 2 )
  {
    if ( (_DWORD)v13 || (_DWORD)v12 || *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 40) )
      return 3221225485LL;
  }
  else
  {
    if ( (!v14 || v14 == 3) && !(_DWORD)v12 || ((v14 - 1) & 0xFD) == 0 && !(_DWORD)v13 )
      return 3221225485LL;
    if ( !v14 )
    {
      if ( (_DWORD)v13 )
        return 3221225485LL;
      v15 = *(_QWORD *)(a1 + 48) == 0LL;
      goto LABEL_22;
    }
  }
  if ( v14 != 1 )
    goto LABEL_23;
  if ( (_DWORD)v12 )
    return 3221225485LL;
  v15 = *(_QWORD *)(a1 + 40) == 0LL;
LABEL_22:
  if ( !v15 )
    return 3221225485LL;
LABEL_23:
  if ( a3 )
    goto LABEL_50;
  if ( !v14 )
  {
    if ( !(_DWORD)v12 )
      return 3221225485LL;
    v16 = *(_QWORD *)(a1 + 40);
    if ( v16 < v9 )
      return 3221225485LL;
    v17 = v16 + v12;
LABEL_48:
    v19 = v17 <= v6;
    goto LABEL_49;
  }
  if ( v14 != 1 )
  {
    if ( v14 != 3 )
      goto LABEL_50;
    if ( !(_DWORD)v12 )
      return 3221225485LL;
    v20 = *(_QWORD *)(a1 + 40);
    if ( v20 < v9 )
      return 3221225485LL;
    if ( v20 + v12 > v6 )
      return 3221225485LL;
    if ( v20 + v12 > v7 )
      return 3221225485LL;
    if ( !(_DWORD)v13 )
      return 3221225485LL;
    v21 = *(_QWORD *)(a1 + 48);
    if ( v21 < (unsigned int)(v12 + v20) )
      return 3221225485LL;
    v17 = v13 + v21;
    if ( v17 > v7 )
      return 3221225485LL;
    goto LABEL_48;
  }
  if ( !(_DWORD)v13 )
    return 3221225485LL;
  v18 = *(_QWORD *)(a1 + 48);
  if ( v18 < v9 )
    return 3221225485LL;
  v19 = v18 + v13 <= v7;
LABEL_49:
  if ( !v19 )
    return 3221225485LL;
LABEL_50:
  if ( (unsigned int)(*(_DWORD *)(a1 + 20) - 1) > 0x1A5DF )
    return 3221225485LL;
  v22 = *(_BYTE *)(a1 + 56);
  if ( v22 == 24 || v22 == 57 )
    return 3221225488LL;
  result = 3221225488LL;
  if ( v22 != 58 )
    return 0LL;
  return result;
}
