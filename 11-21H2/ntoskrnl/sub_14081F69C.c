/*
 * XREFs of sub_14081F69C @ 0x14081F69C
 * Callers:
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 * Callees:
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_140774F24 @ 0x140774F24 (sub_140774F24.c)
 */

void __fastcall sub_14081F69C(__int64 a1, char *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  struct _DEVICE_OBJECT *v6; // rdi
  _QWORD *v7; // rcx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x1000) != 0 )
      return;
  }
  else
  {
    if ( !*((_QWORD *)a2 + 54) )
      return;
    *((_QWORD *)a2 + 54) = 0LL;
    v4 = (_QWORD *)*((_QWORD *)a2 + 1);
    if ( v4 )
      *v4 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
    if ( (char *)qword_140C45E00 == a2 )
      qword_140C45E00 = *(_QWORD *)a2;
  }
  v5 = *((_QWORD *)a2 + 66);
  while ( v5 )
  {
    v7 = (_QWORD *)(v5 + 536);
    v5 = *(_QWORD *)(v5 + 536);
    if ( (char *)v5 == a2 )
    {
      *v7 = *((_QWORD *)a2 + 67);
      break;
    }
  }
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 4);
  sub_14076FBEC((__int64)a2, 0x20000);
  sub_140774F24(a2);
  if ( !a1 )
  {
    v6->DriverObject = qword_140C46250;
    IoDeleteDevice(v6);
  }
}
