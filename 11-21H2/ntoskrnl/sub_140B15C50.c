/*
 * XREFs of sub_140B15C50 @ 0x140B15C50
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     sub_1406C16F8 @ 0x1406C16F8 (sub_1406C16F8.c)
 *     sub_1406D1790 @ 0x1406D1790 (sub_1406D1790.c)
 *     sub_140718B68 @ 0x140718B68 (sub_140718B68.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_140834D0C @ 0x140834D0C (sub_140834D0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140B15E34 @ 0x140B15E34 (sub_140B15E34.c)
 */

__int64 __fastcall sub_140B15C50(__int64 a1, __int64 a2)
{
  int inserted; // edi
  ACL *v3; // rbx
  _QWORD *v4; // rcx
  ULONG_PTR v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-29h]
  int v10; // [rsp+38h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v12[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v13; // [rsp+68h] [rbp+Fh]
  UNICODE_STRING *v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  ACL *v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  PVOID v19; // [rsp+C0h] [rbp+67h] BYREF
  ULONG_PTR v20; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+77h]
  HANDLE Handle; // [rsp+D8h] [rbp+7Fh] BYREF

  Object = 0LL;
  v12[1] = 0;
  v16 = 0;
  v20 = 0LL;
  LODWORD(v19) = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  inserted = sub_140B15E34(a1, a2, &v19);
  if ( inserted >= 0 )
  {
    v3 = sub_140834D0C();
    v12[0] = 48;
    v13 = 0LL;
    v14 = &stru_140D3CE98;
    v15 = 576;
    v17 = v3;
    v18 = 0LL;
    inserted = ObCreateObject(0, (int)CmKeyObjectType, (int)v12, 0);
    ExFreePoolWithTag(v3, 0);
    if ( inserted >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"REGISTRY");
      v10 = 0;
      v9 = sub_140718B68((__m128i *)&DestinationString);
      inserted = sub_1407C3850(qword_140D3CA28, (int)v19, 0LL, 0LL, 0, &DestinationString.Length, v9, v10, &v20);
      if ( inserted >= 0 )
      {
        v4 = Object;
        v5 = v20;
        *(_DWORD *)Object = 1803104306;
        v4[1] = v5;
        v4[2] = 0LL;
        v6 = Object;
        *((_QWORD *)Object + 3) = *((_QWORD *)KeGetCurrentThread() + 153);
        v7 = v20;
        v6[12] = 0;
        *((_QWORD *)v6 + 10) = v6 + 18;
        *((_QWORD *)v6 + 9) = v6 + 18;
        *((_QWORD *)v6 + 7) = 0LL;
        *((_QWORD *)v6 + 8) = 0LL;
        sub_1406D1790(v7);
        sub_1406C16F8((signed __int64)v6, 2);
        sub_140AB4300(v20);
        inserted = ObInsertObject(v6, 0LL, 0, 0, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          v19 = 0LL;
          inserted = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v19, 0LL);
          qword_140D3CB10 = v19;
          if ( inserted < 0 )
            ObCloseHandle(Handle, 0);
          else
            return 0;
        }
      }
    }
  }
  return (unsigned int)inserted;
}
