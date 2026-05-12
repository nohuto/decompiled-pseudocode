/*
 * XREFs of sub_1C0014EE0 @ 0x1C0014EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0014F8C @ 0x1C0014F8C (sub_1C0014F8C.c)
 *     sub_1C0019D54 @ 0x1C0019D54 (sub_1C0019D54.c)
 *     sub_1C0019ED0 @ 0x1C0019ED0 (sub_1C0019ED0.c)
 *     sub_1C0034B20 @ 0x1C0034B20 (sub_1C0034B20.c)
 *     sub_1C003562C @ 0x1C003562C (sub_1C003562C.c)
 *     sub_1C00356B8 @ 0x1C00356B8 (sub_1C00356B8.c)
 *     sub_1C00366F4 @ 0x1C00366F4 (sub_1C00366F4.c)
 *     sub_1C0036F7C @ 0x1C0036F7C (sub_1C0036F7C.c)
 *     sub_1C0037E2C @ 0x1C0037E2C (sub_1C0037E2C.c)
 *     sub_1C00382BC @ 0x1C00382BC (sub_1C00382BC.c)
 *     sub_1C0039708 @ 0x1C0039708 (sub_1C0039708.c)
 *     sub_1C00623A0 @ 0x1C00623A0 (sub_1C00623A0.c)
 *     sub_1C0066E34 @ 0x1C0066E34 (sub_1C0066E34.c)
 *     sub_1C0066FC8 @ 0x1C0066FC8 (sub_1C0066FC8.c)
 */

void __fastcall sub_1C0014EE0(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  __int64 v3; // rbx
  LARGE_INTEGER *v5; // rdi
  int LowPart; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdx

  v3 = *(_QWORD *)(a1 + 64);
  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 4056));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v7 = LowPart - 8;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1C00623A0)(
                v3,
                (unsigned int)a2[4].HighPart,
                (LARGE_INTEGER)a2[5].QuadPart);
          }
          else
          {
            KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
          }
        }
        else
        {
          sub_1C00356B8(v3, (unsigned int)a2[4].HighPart);
        }
      }
      else
      {
        sub_1C003562C(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
      }
      goto LABEL_7;
    }
    LOBYTE(a2) = 1;
    sub_1C0066FC8(*(_QWORD *)(v3 + 896), a2);
LABEL_33:
    LOBYTE(v16) = a3;
    sub_1C0019ED0(v3, v16);
    goto LABEL_7;
  }
  if ( LowPart == 7 )
  {
    sub_1C0066E34(*(PKSPIN_LOCK *)(v3 + 896));
    goto LABEL_7;
  }
  v11 = LowPart - 1;
  if ( !v11 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1C0037E2C)(v3, (LARGE_INTEGER)a2[5].QuadPart, a2[6].LowPart);
    goto LABEL_7;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    sub_1C00366F4(v3, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
    goto LABEL_7;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
          sub_1C00382BC(v3, (unsigned int)a2[4].HighPart);
      }
      else
      {
        sub_1C0036F7C(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
      }
    }
    else
    {
      sub_1C0014F8C(v3 + 944);
      v5 = 0LL;
      if ( !*(_DWORD *)(v3 + 1316) )
        sub_1C0034B20(v3, v3 + 1712);
    }
  }
  else
  {
    sub_1C0014F8C(v3 + 944);
    v5 = 0LL;
    if ( *(_DWORD *)(v3 + 1316) == 1 )
    {
      sub_1C0039708(v3, v3 + 1712, v3 + 1584, *(unsigned int *)(v3 + 1312));
      goto LABEL_7;
    }
    if ( !(unsigned int)sub_1C0019D54(v3, 0LL) )
      goto LABEL_33;
  }
LABEL_7:
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 4056));
  if ( v5 )
    sub_1C0014F8C(v3 + 944);
}
