/*
 * XREFs of sub_1409D75C0 @ 0x1409D75C0
 * Callers:
 *     sub_1405FB7C0 @ 0x1405FB7C0 (sub_1405FB7C0.c)
 *     sub_1409D7D54 @ 0x1409D7D54 (sub_1409D7D54.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405FABF8 @ 0x1405FABF8 (sub_1405FABF8.c)
 *     sub_1409D6368 @ 0x1409D6368 (sub_1409D6368.c)
 */

__int64 __fastcall sub_1409D75C0(struct _DEVICE_OBJECT *a1, unsigned __int16 *a2, ULONG a3)
{
  BOOLEAN v6; // bp
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  unsigned int v11; // ebx

  v6 = IoSetThreadHardErrorMode(0);
  v10 = sub_1409D6368(v7, a1, v8, v9, a2, a3);
  if ( v10 >= 0 )
  {
    v11 = *a2;
    if ( v11 >= 2 )
    {
      memmove(a2, a2 + 1, *a2);
      sub_1405FABF8(a2, (v11 & 0xFFFFFFFE) + 2);
      v10 = 0;
    }
    else
    {
      v10 = -1073740730;
    }
  }
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)v10;
}
