/*
 * XREFs of sub_140749C4C @ 0x140749C4C
 * Callers:
 *     sub_1407491FC @ 0x1407491FC (sub_1407491FC.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 *     sub_14095B2D4 @ 0x14095B2D4 (sub_14095B2D4.c)
 * Callees:
 *     sub_14025A078 @ 0x14025A078 (sub_14025A078.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D2080 @ 0x1402D2080 (sub_1402D2080.c)
 *     sub_1402D2478 @ 0x1402D2478 (sub_1402D2478.c)
 *     sub_1402D26E0 @ 0x1402D26E0 (sub_1402D26E0.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     sub_1402D2A14 @ 0x1402D2A14 (sub_1402D2A14.c)
 *     sub_1402DE33C @ 0x1402DE33C (sub_1402DE33C.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_1406E4E14 @ 0x1406E4E14 (sub_1406E4E14.c)
 *     sub_140749588 @ 0x140749588 (sub_140749588.c)
 *     sub_14074D338 @ 0x14074D338 (sub_14074D338.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_1407730FC @ 0x1407730FC (sub_1407730FC.c)
 */

__int64 __fastcall sub_140749C4C(__int64 a1, int a2, int a3)
{
  int v5; // ebp
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v11; // r8
  __int64 v12; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  int v14; // [rsp+70h] [rbp-18h]
  int v15; // [rsp+74h] [rbp-14h]

  v15 = 0;
  memset(&Event, 0, sizeof(Event));
  v5 = a2 != 0 ? 5 : 0;
  if ( !a2 && (unsigned int)sub_140749588(*(struct _DEVICE_OBJECT **)(a1 + 32)) != -1 )
    sub_1402DE33C(*(_QWORD *)(a1 + 32), 1024, 1);
  if ( a3
    || (dword_140C0974C & 1) == 0
    || (*(_DWORD *)(a1 + 396) & 0x400000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x4000) != 0
    || (_DWORD)InitSafeBootMode
    || (v6 = (_QWORD *)sub_14074D338(a1, (unsigned int)(v5 + 776), 0LL)) == 0LL )
  {
    sub_1402D2774(&stru_14000FE78, (unsigned __int16 *)(a1 + 40));
    v12 = 0LL;
    v14 = -1073741823;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v9 = sub_1402D2478(*(_QWORD *)(a1 + 32), (int)sub_140564940, (__int64)&v12);
    if ( v9 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = v14;
    }
    if ( v9 >= 0 )
    {
      sub_14025A078(*(_QWORD *)(a1 + 32));
      sub_14077198C(qword_140D00AC0, *(_QWORD *)(a1 + 48), 1, 0LL, (__int64)qword_14000E1A0, 0, 0LL, 0, 0);
      sub_1406E4E14(*(PDEVICE_OBJECT *)(a1 + 32));
    }
    v11 = v12;
    *(_DWORD *)(a1 + 392) = v9;
    sub_1402D2080(a1, (unsigned int)v9, v11);
    sub_1402DE844(a1, v5 + 776);
  }
  else
  {
    sub_1402D2774(&stru_14000FE78, (unsigned __int16 *)(a1 + 40));
    sub_1402DE844(a1, 775);
    *(_DWORD *)(a1 + 392) = 259;
    sub_1402D26E0(v7, v6);
    v9 = sub_1402D2478(*(_QWORD *)(a1 + 32), (int)sub_1402DE5C0, (__int64)v6);
    if ( v9 == 259 )
    {
      sub_1402D2774(&stru_14000E390, (unsigned __int16 *)(a1 + 40));
    }
    else
    {
      sub_1402D2A14(v8, v6);
      return (unsigned int)sub_1407730FC(v6);
    }
  }
  return (unsigned int)v9;
}
