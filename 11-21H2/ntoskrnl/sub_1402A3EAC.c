/*
 * XREFs of sub_1402A3EAC @ 0x1402A3EAC
 * Callers:
 *     sub_14020C530 @ 0x14020C530 (sub_14020C530.c)
 *     sub_140556F1C @ 0x140556F1C (sub_140556F1C.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 * Callees:
 *     sub_1402A3EF0 @ 0x1402A3EF0 (sub_1402A3EF0.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402A3EAC(ULONG_PTR BugCheckParameter2, char a2)
{
  _DWORD *v2; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (_DWORD *)(BugCheckParameter2 + 28);
  if ( a2 )
    result = sub_1402A3EF0(9uLL);
  else
    result = (unsigned int)++*v2;
  if ( (int)result <= 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v5 )
    {
      sub_1403D99B4(v5, (PVOID)0x150);
      v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL);
      if ( v6 )
      {
        sub_1403D99B4(v6, (PVOID)0x150);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 8LL) + 56LL));
      }
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 7uLL, (unsigned int)*v2);
  }
  return result;
}
