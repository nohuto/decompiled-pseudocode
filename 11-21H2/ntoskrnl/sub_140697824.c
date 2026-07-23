/*
 * XREFs of sub_140697824 @ 0x140697824
 * Callers:
 *     sub_140697760 @ 0x140697760 (sub_140697760.c)
 *     sub_1406E6424 @ 0x1406E6424 (sub_1406E6424.c)
 *     sub_14074761C @ 0x14074761C (sub_14074761C.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     DoScreenSave @ 0x14094EA0C (DoScreenSave.c)
 * Callees:
 *     sub_1402088DC @ 0x1402088DC (sub_1402088DC.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_140561D38 @ 0x140561D38 (sub_140561D38.c)
 *     sub_1406979BC @ 0x1406979BC (sub_1406979BC.c)
 *     sub_140697A7C @ 0x140697A7C (sub_140697A7C.c)
 *     sub_140697B34 @ 0x140697B34 (sub_140697B34.c)
 *     sub_140697BE0 @ 0x140697BE0 (sub_140697BE0.c)
 *     sub_140697EF0 @ 0x140697EF0 (sub_140697EF0.c)
 *     sub_140698128 @ 0x140698128 (sub_140698128.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140697824(__int64 a1, __int64 a2, void *a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v9; // r12d
  int v10; // edi
  unsigned int *v12; // rcx
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
  __int64 v15; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  __int128 v17; // [rsp+58h] [rbp-39h] BYREF
  _OWORD v18[2]; // [rsp+68h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF

  KeyHandle = 0LL;
  v15 = 0LL;
  v9 = a1;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  v10 = sub_140698128(a1, a3, v18);
  if ( v10 >= 0 )
  {
    v10 = sub_140697EF0(v9, a2, (_DWORD)a3, a4, 1, (__int64)sub_1406E8E20, (__int64)v18);
    if ( v10 >= 0 )
    {
      if ( (a4 & 8) == 0 || (v10 = sub_140697BE0(*(_QWORD *)(a2 + 8), a3, v18), v10 >= 0) )
      {
        if ( (a4 & 0x10) == 0 || (v10 = sub_140697B34(*(_QWORD *)(a2 + 16), a3), v10 >= 0) )
        {
          if ( (a4 & 0x20) == 0 || (v10 = sub_140697A7C(*(_QWORD *)(a2 + 16), a3), v10 >= 0) )
          {
            memset(&ObjectAttributes.Attributes + 1, 0, 20);
            *((_QWORD *)&v17 + 1) = L"Status";
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
            LODWORD(v17) = 917516;
            ObjectAttributes.RootDirectory = a3;
            ObjectAttributes.Attributes = 576;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              if ( a6 )
              {
                if ( (int)sub_140561D38((__int64)v18, KeyHandle, (__int64)L"Reboot", &v15) >= 0 )
                {
                  if ( sub_1402088DC(v15) && *(unsigned int *)((char *)v12 + v12[2]) )
                    *a6 |= 0x40u;
                  ExFreePoolWithTag(v12, 0);
                }
                if ( (int)sub_140561D38((__int64)v18, KeyHandle, (__int64)L"ClassConfigured", &v15) >= 0 )
                {
                  if ( sub_1402088DC(v15) && *(unsigned int *)((char *)v13 + v13[2]) )
                    *a6 |= 2u;
                  ExFreePoolWithTag(v13, 0);
                }
              }
              if ( a5 && (int)sub_140561D38((__int64)v18, KeyHandle, (__int64)L"ConfigFlags", &v15) >= 0 )
              {
                if ( sub_1402088DC(v15) )
                  *a5 |= *(unsigned int *)((char *)v14 + v14[2]);
                ExFreePoolWithTag(v14, 0);
              }
            }
          }
        }
      }
    }
  }
  sub_1406979BC(v18);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v10;
}
