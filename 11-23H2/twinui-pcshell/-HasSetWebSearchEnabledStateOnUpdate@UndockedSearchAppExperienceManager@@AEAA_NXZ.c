/*
 * XREFs of ?HasSetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x1801ED530
 * Callers:
 *     ?TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801EFCC4 (-TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall UndockedSearchAppExperienceManager::HasSetWebSearchEnabledStateOnUpdate(
        UndockedSearchAppExperienceManager *this)
{
  int v1; // ebx
  LSTATUS ValueW; // eax
  char v3; // dl
  int v4; // ecx
  bool v5; // zf
  bool v6; // sf
  UndockedSearchAppExperienceManager *v8; // [rsp+50h] [rbp+8h] BYREF
  DWORD v9; // [rsp+58h] [rbp+10h] BYREF
  DWORD v10; // [rsp+60h] [rbp+18h] BYREF

  v8 = this;
  v10 = 4;
  v1 = 0;
  v9 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
             L"HasSetWebSearchEnabledStateOnUpdate",
             0x10000012u,
             &v9,
             &v8,
             &v10);
  v3 = 1;
  v4 = ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      goto LABEL_10;
  }
  else
  {
    if ( v9 == 4 )
    {
      if ( (unsigned int)v8 > 1 )
      {
LABEL_10:
        v6 = 1;
        goto LABEL_11;
      }
      v4 = 0;
      v5 = (_DWORD)v8 == 1;
    }
    else
    {
      if ( v10 != 4 || (unsigned __int16)((_WORD)v8 - 48) > 1u )
        goto LABEL_10;
      v4 = 0;
      v5 = (_WORD)v8 == 49;
    }
    LOBYTE(v1) = v5;
  }
  v6 = v4 < 0;
  if ( v4 > 0 )
    goto LABEL_10;
LABEL_11:
  if ( v6 || !v1 )
    return 0;
  return v3;
}
