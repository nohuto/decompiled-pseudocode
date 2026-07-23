/*
 * XREFs of sub_1402DD9AC @ 0x1402DD9AC
 * Callers:
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     sub_140561048 @ 0x140561048 (sub_140561048.c)
 *     sub_140561EBC @ 0x140561EBC (sub_140561EBC.c)
 *     sub_140561F5C @ 0x140561F5C (sub_140561F5C.c)
 */

__int64 __fastcall sub_1402DD9AC(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 result; // rax
  __int64 *v10; // rdx

  if ( a2 == 8 )
  {
    v5 = 0LL;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (byte_140C0DD4B & 8) == 0 )
          return result;
        if ( a1 )
          v5 = *(_QWORD *)(a1 + 48);
        v10 = qword_14003B5B0;
      }
      else
      {
        if ( (_DWORD)a3 != 2 || (byte_140C0DD4B & 8) == 0 )
          return result;
        if ( a1 )
          v5 = *(_QWORD *)(a1 + 48);
        v10 = qword_14003B650;
      }
    }
    else
    {
      if ( (byte_140C0DD4B & 8) == 0 )
        return result;
      if ( a1 )
        v5 = *(_QWORD *)(a1 + 48);
      v10 = qword_14003B430;
    }
    return sub_140561048(a1, v10, a3, v5);
  }
  if ( a2 <= 8 )
    return result;
  if ( a2 <= 10 )
  {
LABEL_14:
    LODWORD(v6) = 0;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (byte_140C0DD4B & 8) != 0 )
        {
          if ( a1 )
            v6 = *(_QWORD *)(a1 + 48);
          return sub_140561EBC(a1, (unsigned int)qword_14003B740, 1, v6, a2);
        }
      }
      else if ( (_DWORD)a3 == 2 && (byte_140C0DD4B & 8) != 0 )
      {
        if ( a1 )
          v6 = *(_QWORD *)(a1 + 48);
        return sub_140561EBC(a1, (unsigned int)qword_14003B540, 2, v6, a2);
      }
    }
    else if ( (byte_140C0DD4B & 8) != 0 )
    {
      if ( a1 )
        v6 = *(_QWORD *)(a1 + 48);
      return sub_140561EBC(a1, (unsigned int)qword_14003B080, 0, v6, a2);
    }
    return result;
  }
  if ( a2 != 16 && a2 != 12 )
  {
    if ( a2 != 14 )
    {
      if ( a2 > 20 && a2 <= 24 )
      {
        LODWORD(v8) = 0;
        if ( (_DWORD)a3 )
        {
          if ( (_DWORD)a3 == 1 )
          {
            if ( (byte_140C0DD49 & 0x20) != 0 )
            {
              if ( a1 )
                v8 = *(_QWORD *)(a1 + 48);
              return sub_140561EBC(a1, (unsigned int)qword_14003B760, 1, v8, a2);
            }
          }
          else if ( (_DWORD)a3 == 2 && (byte_140C0DD49 & 0x20) != 0 )
          {
            if ( a1 )
              v8 = *(_QWORD *)(a1 + 48);
            return sub_140561F5C(a1, (unsigned int)qword_14003B270, 2, v8, a2, a4);
          }
        }
        else if ( (byte_140C0DD49 & 0x20) != 0 )
        {
          if ( a1 )
            v8 = *(_QWORD *)(a1 + 48);
          return sub_140561EBC(a1, (unsigned int)qword_14003B190, 0, v8, a2);
        }
      }
      return result;
    }
    goto LABEL_14;
  }
  LODWORD(v7) = 0;
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 == 1 )
    {
      if ( (byte_140C0DD4B & 0x10) != 0 )
      {
        if ( a1 )
          v7 = *(_QWORD *)(a1 + 48);
        return sub_140561EBC(a1, (unsigned int)qword_14003B5E0, 1, v7, a2);
      }
    }
    else if ( (_DWORD)a3 == 2 && (byte_140C0DD4B & 0x10) != 0 )
    {
      if ( a1 )
        v7 = *(_QWORD *)(a1 + 48);
      return sub_140561F5C(a1, (unsigned int)qword_14003B7A0, 2, v7, a2, a4);
    }
  }
  else if ( (byte_140C0DD4B & 0x10) != 0 )
  {
    if ( a1 )
      v7 = *(_QWORD *)(a1 + 48);
    return sub_140561EBC(a1, (unsigned int)qword_14003B180, 0, v7, a2);
  }
  return result;
}
