/*
 * XREFs of sub_140695A40 @ 0x140695A40
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenIsRestricted @ 0x14021F680 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14021F6A0 (SeTokenIsWriteRestricted.c)
 *     sub_14021F6B4 @ 0x14021F6B4 (sub_14021F6B4.c)
 *     sub_14021F6E8 @ 0x14021F6E8 (sub_14021F6E8.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140695FFC @ 0x140695FFC (sub_140695FFC.c)
 *     sub_1406960FC @ 0x1406960FC (sub_1406960FC.c)
 *     sub_140696154 @ 0x140696154 (sub_140696154.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 */

__int64 __fastcall sub_140695A40(HANDLE Handle, HANDLE a2, char *a3)
{
  unsigned int *v5; // rdi
  char v6; // r12
  KPROCESSOR_MODE v7; // bl
  __int64 v8; // rcx
  NTSTATUS InformationToken; // r15d
  unsigned int *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r13
  void *v13; // rcx
  void *v14; // rdx
  BOOLEAN IsRestricted; // bl
  BOOLEAN v17; // bl
  PVOID TokenInformation; // [rsp+30h] [rbp-38h] BYREF
  PVOID Token[6]; // [rsp+38h] [rbp-30h] BYREF
  char v21; // [rsp+88h] [rbp+20h]

  v5 = 0LL;
  v6 = 0;
  v21 = 0;
  TokenInformation = 0LL;
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v7 )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a3;
    *(_BYTE *)v8 = *(_BYTE *)v8;
  }
  Token[0] = 0LL;
  InformationToken = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, v7, Token, 0LL);
  v10 = (unsigned int *)Token[0];
  if ( InformationToken < 0 )
  {
    v10 = 0LL;
    goto LABEL_26;
  }
  if ( Handle == a2 )
    goto LABEL_34;
  Token[0] = 0LL;
  InformationToken = ObReferenceObjectByHandle(a2, 8u, (POBJECT_TYPE)SeTokenObjectType, v7, Token, 0LL);
  v5 = (unsigned int *)Token[0];
  if ( InformationToken < 0 )
  {
    v5 = 0LL;
    goto LABEL_26;
  }
  if ( v10 == Token[0] )
  {
LABEL_34:
    v6 = 1;
    goto LABEL_26;
  }
  sub_14021F6E8((unsigned __int64)v10, (unsigned __int64)Token[0]);
  v21 = 1;
  v11 = *((_QWORD *)v5 + 19);
  v12 = *((_QWORD *)v10 + 19);
  if ( RtlEqualSid(*(PSID *)v12, *(PSID *)v11) )
  {
    if ( ((*(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v12 + 8)) & 0x14) == 0 )
    {
      InformationToken = SeQueryInformationToken(v10, TokenIsAppContainer, &TokenInformation);
      if ( InformationToken >= 0 )
      {
        InformationToken = SeQueryInformationToken(v5, TokenIsAppContainer, (PVOID *)((char *)&TokenInformation + 4));
        if ( InformationToken >= 0
          && (_DWORD)TokenInformation == HIDWORD(TokenInformation)
          && (!(_DWORD)TokenInformation
           || RtlEqualSid(*((PSID *)v10 + 98), *((PSID *)v5 + 98))
           && (unsigned __int8)sub_140696154(*((_QWORD *)v10 + 99), v10[200], *((_QWORD *)v5 + 99), v5[200])) )
        {
          v13 = (void *)*((_QWORD *)v10 + 138);
          v14 = (void *)*((_QWORD *)v5 + 138);
          if ( (v13 != 0LL) == (v14 != 0LL) && (!v13 || RtlEqualSid(v13, v14)) )
          {
            IsRestricted = SeTokenIsRestricted(v10);
            if ( IsRestricted == SeTokenIsRestricted(v5) )
            {
              if ( !IsRestricted
                || (v17 = SeTokenIsWriteRestricted(v10), v17 == SeTokenIsWriteRestricted(v5))
                && (unsigned __int8)sub_140696154(*((_QWORD *)v10 + 20), v10[32], *((_QWORD *)v5 + 20), v5[32]) )
              {
                if ( *((_QWORD *)v10 + 9) == *((_QWORD *)v5 + 9)
                  && *((_QWORD *)v10 + 8) == *((_QWORD *)v5 + 8)
                  && v10[53] == v5[53]
                  && (unsigned __int8)sub_140696154(
                                        *((_QWORD *)v10 + 19) + 16LL,
                                        v10[31] - 1,
                                        *((_QWORD *)v5 + 19) + 16LL,
                                        v5[31] - 1)
                  && (unsigned __int8)sub_1406960FC(*((_QWORD *)v10 + 137), *((_QWORD *)v5 + 137))
                  && (unsigned __int8)sub_140695FFC(*((_QWORD *)v10 + 97), *((_QWORD *)v5 + 97)) )
                {
                  v6 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_26:
  if ( v21 )
    sub_14021F6B4((__int64)v10, (__int64)v5);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v5 )
    ObfDereferenceObject(v5);
  *a3 = v6;
  return (unsigned int)InformationToken;
}
