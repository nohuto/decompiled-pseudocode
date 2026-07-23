/*
 * XREFs of sub_14075DD3C @ 0x14075DD3C
 * Callers:
 *     sub_14069A660 @ 0x14069A660 (sub_14069A660.c)
 *     sub_14075DBD8 @ 0x14075DBD8 (sub_14075DBD8.c)
 *     sub_140856634 @ 0x140856634 (sub_140856634.c)
 *     sub_1409DE4C4 @ 0x1409DE4C4 (sub_1409DE4C4.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     sub_140252CF0 @ 0x140252CF0 (sub_140252CF0.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_140783CD8 @ 0x140783CD8 (sub_140783CD8.c)
 *     sub_1409DCFD4 @ 0x1409DCFD4 (sub_1409DCFD4.c)
 *     sub_1409DD3C4 @ 0x1409DD3C4 (sub_1409DD3C4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14075DD3C(_DWORD *P, __int64 a2, char a3)
{
  char v3; // bp
  _DWORD *v4; // rsi
  _DWORD *v5; // rdi
  _DWORD *v6; // rbx
  __int64 v7; // r13
  unsigned int v8; // r15d
  _QWORD *v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  char v14; // [rsp+88h] [rbp+10h]
  _DWORD *v16; // [rsp+98h] [rbp+20h]

  v14 = a2;
  v3 = a3;
  v4 = P;
  if ( (P[11] & 0x2000) == 0 )
  {
    v5 = 0LL;
    v6 = P;
    v16 = 0LL;
LABEL_3:
    if ( (v6[11] & 0x80u) != 0 )
      v6 = (_DWORD *)sub_1409DD3C4(v6);
    LOBYTE(a2) = 1;
    v7 = sub_140783CD8(v6 + 6, a2);
    if ( v7 )
    {
      v8 = 0;
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      v10 = *(_QWORD **)(v7 + 40);
      if ( v10 != (_QWORD *)(v7 + 40) )
      {
        do
        {
          v11 = (__int64)(v10 - 5);
          v10 = (_QWORD *)*v10;
          if ( ObReferenceObjectSafe(v11) )
          {
            if ( (*(_DWORD *)(v11 + 164) & 2) != 0 )
            {
              if ( *(_QWORD *)(v11 + 72) )
                sub_14042A5E0(v6, *(_QWORD *)(v11 + 80));
            }
            else if ( (int)sub_140252CF0(v11, v6, v14) < 0 )
            {
              v8 = -1073741823;
            }
            ObfDereferenceObject((PVOID)v11);
          }
        }
        while ( v10 != (_QWORD *)(v7 + 40) );
        v5 = v16;
        v4 = P;
        v3 = a3;
      }
      KeReleaseMutex(&Object, 0);
      sub_1407838E0(&off_140C037C0, v7);
    }
    else
    {
      v8 = -1073741163;
    }
    if ( v3 )
      ExFreePoolWithTag(v4, 0);
    if ( v6 != v4 && v6 != v5 )
      ExFreePoolWithTag(v6, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v8;
  }
  v12 = sub_1409DCFD4();
  v16 = (_DWORD *)v12;
  v5 = (_DWORD *)v12;
  if ( v12 )
  {
    v6 = (_DWORD *)v12;
    goto LABEL_3;
  }
  if ( v3 )
    ExFreePoolWithTag(v4, 0);
  return 3221225473LL;
}
