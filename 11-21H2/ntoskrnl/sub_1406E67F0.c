/*
 * XREFs of sub_1406E67F0 @ 0x1406E67F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402088DC @ 0x1402088DC (sub_1402088DC.c)
 *     sub_1402D199C @ 0x1402D199C (sub_1402D199C.c)
 *     sub_1402D19D8 @ 0x1402D19D8 (sub_1402D19D8.c)
 *     sub_1402D19FC @ 0x1402D19FC (sub_1402D19FC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067AB94 @ 0x14067AB94 (sub_14067AB94.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_14077D91C @ 0x14077D91C (sub_14077D91C.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406E67F0(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  _DWORD *v6; // r15
  unsigned int v7; // edx
  _WORD *v8; // rcx
  wchar_t *v9; // rax
  int v10; // edi
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // r14d
  _DWORD *Pool2; // rsi
  int v16; // ecx
  _DWORD *v17; // rax
  __int64 v18; // [rsp+60h] [rbp-39h] BYREF
  PVOID v19; // [rsp+68h] [rbp-31h] BYREF
  PVOID P; // [rsp+70h] [rbp-29h] BYREF
  __int64 v21; // [rsp+78h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-19h] BYREF
  UNICODE_STRING GuidString; // [rsp+90h] [rbp-9h] BYREF
  GUID Guid; // [rsp+A0h] [rbp+7h] BYREF
  int v25; // [rsp+B0h] [rbp+17h]

  P = 0LL;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  LODWORD(v21) = 0;
  LODWORD(v18) = 0;
  v19 = 0LL;
  v25 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  Guid = 0LL;
  v5 = sub_14067B838(a2, L"PropertyGuid", 0, &P);
  if ( v5 < 0 )
    goto LABEL_56;
  v6 = P;
  if ( !sub_1402D199C(P) )
    goto LABEL_19;
  v7 = v6[3];
  v8 = (_WORD *)((char *)v6 + (unsigned int)v6[2]);
  LODWORD(P) = 0;
  sub_14067AB94(v8, v7, (int *)&P);
  GuidString.MaximumLength = *((_WORD *)v6 + 6);
  v9 = (wchar_t *)((char *)v6 + (unsigned int)v6[2]);
  GuidString.Length = (unsigned __int16)P;
  GuidString.Buffer = v9;
  v5 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v5 < 0 )
    goto LABEL_14;
  ExFreePoolWithTag(v6, 0);
  P = 0LL;
  v5 = sub_14067B838(a2, L"PropertyId", 0, &P);
  if ( v5 < 0 )
  {
LABEL_56:
    v6 = P;
  }
  else
  {
    v6 = P;
    if ( !sub_1402088DC((__int64)P) )
      goto LABEL_19;
    v10 = 1;
    v25 = *(_DWORD *)((char *)v6 + (unsigned int)v6[2]);
    v11 = sub_14077D91C(0x47706E50u, 0LL, 0LL, (__int64)&Guid, (__int64)&v21, (__int64)&v19, (__int64)&v18, 0);
    v5 = v11;
    if ( v11 < 0 )
    {
      if ( v11 == -1073741275 )
      {
        v5 = 0;
        goto LABEL_55;
      }
    }
    else
    {
      if ( (unsigned int)v21 > 0x2012 )
        goto LABEL_45;
      if ( (_DWORD)v21 == 8210 )
      {
        v13 = v18;
        if ( sub_1402D19FC(v19, v18) )
        {
          v10 = 7;
          goto LABEL_12;
        }
        goto LABEL_19;
      }
      if ( (unsigned int)v21 > 0xD )
      {
        if ( (_DWORD)v21 == 18 )
          goto LABEL_11;
        if ( (_DWORD)v21 != 17 )
        {
          if ( (_DWORD)v21 == 20 )
            goto LABEL_11;
          if ( (unsigned int)v21 > 0x15 )
          {
            if ( (unsigned int)v21 > 0x18 )
            {
              if ( (_DWORD)v21 != 25 )
                goto LABEL_45;
LABEL_11:
              v13 = v18;
              if ( sub_1402D19D8((__int64)v19, v18) )
              {
LABEL_12:
                Pool2 = v19;
                v19 = 0LL;
LABEL_13:
                *(_DWORD *)(a3 + 32) = v10;
                *(_DWORD *)(a3 + 36) = v13;
                *(_QWORD *)(a3 + 40) = Pool2;
                goto LABEL_14;
              }
              goto LABEL_19;
            }
            goto LABEL_46;
          }
          goto LABEL_45;
        }
        if ( (_DWORD)v18 == 1 )
        {
          v10 = 4;
          v13 = 4;
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 1667526736LL);
          if ( Pool2 )
          {
            v16 = *(_BYTE *)v19 == 0xFF;
            goto LABEL_28;
          }
          goto LABEL_27;
        }
LABEL_19:
        v5 = -1073741823;
        goto LABEL_14;
      }
      if ( (_DWORD)v21 != 13 )
      {
        if ( (unsigned int)v21 > 5 )
        {
          if ( (unsigned int)v21 <= 7 )
          {
LABEL_46:
            if ( (_DWORD)v18 == 4 )
            {
              v10 = 4;
              v13 = 4;
              goto LABEL_12;
            }
            goto LABEL_19;
          }
          if ( (unsigned int)v21 <= 9 )
          {
            v13 = 8;
            if ( (_DWORD)v18 == 8 )
            {
              v10 = 11;
              goto LABEL_12;
            }
            goto LABEL_19;
          }
LABEL_45:
          v13 = v18;
          v10 = 3;
          goto LABEL_12;
        }
        if ( (unsigned int)v21 >= 4 )
        {
          if ( (_DWORD)v18 != 2 )
            goto LABEL_19;
          v10 = 4;
          v13 = 4;
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 1667526736LL);
          if ( Pool2 )
          {
            v16 = *(unsigned __int16 *)v19;
            goto LABEL_28;
          }
LABEL_27:
          v5 = -1073741670;
          goto LABEL_14;
        }
        if ( (unsigned int)v21 > 1 )
        {
          if ( (_DWORD)v18 != 1 )
            goto LABEL_19;
          v10 = 4;
          v13 = 4;
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 1667526736LL);
          if ( Pool2 )
          {
            v16 = *(unsigned __int8 *)v19;
LABEL_28:
            *Pool2 = v16;
            goto LABEL_13;
          }
          goto LABEL_27;
        }
LABEL_55:
        Pool2 = 0LL;
        v13 = 0;
        v10 = 0;
        goto LABEL_13;
      }
      if ( (_DWORD)v18 != 16 )
        goto LABEL_19;
      LOBYTE(v12) = 1;
      v5 = sub_1407454A8(v19, &UnicodeString, v12);
      if ( v5 >= 0 )
      {
        v13 = UnicodeString.Length + 2;
        v17 = (_DWORD *)ExAllocatePool2(256LL, v13, 1667526736LL);
        Pool2 = v17;
        if ( v17 )
        {
          memmove(v17, UnicodeString.Buffer, v13);
          goto LABEL_13;
        }
        goto LABEL_27;
      }
    }
  }
LABEL_14:
  RtlFreeUnicodeString(&UnicodeString);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v5;
}
